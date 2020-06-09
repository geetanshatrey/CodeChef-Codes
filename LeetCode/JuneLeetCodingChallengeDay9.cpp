// Link to the problem : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3355/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, f = 0;
        if(s == "") {
            return true;
        }
        for(int j = 0; j < t.length(); j++) {
            if(s[i] == t[j]) {
                i++;
                if(i == s.length()) {
                    f = 1;
                    break;
                }
            }
        }
        if(f == 1) {
            return true;
        }
        else {
            return false;
        }
    }
};
