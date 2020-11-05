// Link to the problem : https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/564/week-1-november-1st-november-7th/3518/
// Problem Name : Consecutive Characters

class Solution {
public:
    int maxPower(string s) {
        int power = 0,temp = 0;
        char q = s[0];
        for(int i = 1; i < s.length(); i++) {
            if(s[i] == q) {
                temp++;
            }
            else {
                if(temp > power) {
                    power = temp;
                    temp = 0;
                }
                temp = 0;
                q = s[i];
            }
        }
        if(temp != 0) {
           if(temp > power) {
                power = temp;
                temp = 0;
            } 
        }
        return power + 1;
    }
};
