// Link to the problem : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/555/week-2-september-8th-september-14th/3455/
// Problem Name : Bulls and Cows
// Solution Method : Hash Table

class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> temp;
        vector <vector<int>> vals(10, temp); 
        for(int i = 0; i < secret.length(); i++) {
            int x = secret[i] - '0';
            vals[x].push_back(i); 
        }
        int a = 0, b = 0;
        int equ[10] = {0}, uneq[10] ={0};
        for(int i = 0; i < guess.length(); i++) {
            int x = guess[i] - '0';
            int f = 0;
            for(int j = 0; j < vals[x].size(); j++) {
                if(vals[x][j] == i) {
                    a++;
                    equ[x]++;
                    f = 1; 
                    break;
                }
            }
            if(vals[x].size() != 0 && f == 0) {
                uneq[x]++;
            }
        }
        for(int i = 0; i < 10; i++) {
            if(uneq[i] + equ[i] <= vals[i].size()) {
                b += uneq[i];
            }
            else {
                b += vals[i].size() - equ[i];
            }
        }
        string res = to_string(a) + "A" + to_string(b) + "B";
        return res;
    }
};
