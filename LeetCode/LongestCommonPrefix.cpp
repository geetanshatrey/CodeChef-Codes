// Link to the problem : https://leetcode.com/problems/longest-common-prefix/
// Problem Name : Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "", temp;
        for(int i = 0; i < strs.size(); i++) {
            if(i == 0) {
                s = strs[i];
            }
            else {
                temp = "";
                for(int j = 0; j < strs[i].length() && j < s.length(); j++) {
                    if(s[j] == strs[i][j]) {
                        temp += s[j];
                    }
                    else {
                        break;
                    }
                }
                s = temp;
            }
        }
        return s;
    }
};
