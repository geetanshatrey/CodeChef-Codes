// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3589/
// Problem Name : Check Array Formation Through Concatenation

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int table[101];
        fill(table,table + 101,-1);
        for(int i = 0; i < arr.size(); i++) {
            table[arr[i]] = i;
        }
        vector<int> res;
        for(int i = 0; i < pieces.size(); i++) {
            int k = -1;
            for(int j = 0; j < pieces[i].size(); j++) {
                if(j == 0) {
                    if(table[pieces[i][j]] == -1) {
                        return false;
                    }
                    else {
                        k = table[pieces[i][j]];
                        res.push_back(arr[k]);
                        k++;
                    }
                }
                else {
                    if(pieces[i][j] != arr[k]) {
                        return false;
                    }
                    else {
                        k++;
                        res.push_back(arr[k]);
                    }
                }
            }
        }
        return true;
    }
};
