// Link to the problem : https://leetcode.com/problems/verifying-an-alien-dictionary/
// Problem Name : Verifying an Alien Dictionary
// Solution Method : String Functions

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < words.size() - 1; i++) {
            int c = 0;
            int f = 0;
            while(c < words[i].size() && c < words[i+1].size()) {
                char x = words[i][c];
                char y = words[i+1][c];
                if(order.find(x) > order.find(y)) {
                    return false;
                }
                else if(order.find(x) < order.find(y)) {
                    f = 1;
                    break;
                }
                c++;
            }
            if(f == 1) {
               continue; 
            }
            if(words[i].size() != words[i+1].size()) {
                if(words[i].size() > words[i+1].size()) {
                    return false;
                }
            }
        }
        return true;
    }
};
