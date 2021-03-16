// Link to the problem : https://leetcode.com/problems/robot-bounded-in-circle/
// Problem Name : Robot Bounded In Circle

class Solution {
    int x = 0;
    int y = 0;
    char angles[4] = {'N', 'E', 'S', 'W'};
    map<string, int> mp;
    map<string, int>:: iterator itr;
    int idx = 0;
public:
    void moveRobot(char angle) {
        if(angle  == 'N') {
            y++;
        } else if(angle == 'W') {
            x--;
        } else if(angle == 'S') {
            y--;
        } else if(angle == 'E') {
            x++;
        }
    }
    
    bool isRobotBounded(string instructions) {
        mp["0,0"] = instructions.size() - 1;
        for(int j = 0; j < 4; j++) {
            for(int i = 0; i < instructions.length(); i++) {
                if(instructions[i] == 'G') {
                    char Z = angles[idx];
                    moveRobot(Z);
                }
                else {
                    if(instructions[i] == 'L') {
                        if(idx == 0) {
                            idx = 3;
                        }
                        else {
                            idx--;
                        }
                    }
                    else {
                        if(idx == 3) {
                            idx = 0;
                        }
                        else {
                            idx++;
                        }
                    }
                }
                string result = to_string(x) + "," + to_string(y); 
                itr = mp.find(result);
                if(itr == mp.end()) {
                    mp[result] = i;
                }
                else {
                    if(itr->second == i) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};