// Link to the problem : vhttps://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3612/
// Problem Name : One Edit Distance

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        if(s == t) {
            return false;
        }
        int x = s.length() - t.length();
        int i;
        if(abs(x) > 1) {
            return false;
        }
        else {
            int first = -1;
            for(i = 0; i < s.length() && i < t.length(); i++) {
                if(s[i] != t[i]) {
                    if(first == -1) {
                        first = i;
                    }
                    else {
                        if(first != i - 1) {
                            return false;
                        }
                        break;
                    }
                }
            }
            if(first == -1) {
                return true;
            }
            if(i == s.length() && i == t.length()) {
                return true;
            }
            else {
                if(s.length() - t.length() == 1) {
                    int j = first;
                    for(i = first + 1; i < s.length(); i++) {
                        if(s[i] != t[j]) {
                            return false;
                        }
                        j++;
                    }
                    return true;
                }
                else if(t.length() - s.length() == 1) {
                    int j = first;
                    for(i = first + 1; i < t.length(); i++) {
                        if(t[i] != s[j]) {
                            return false;
                        }
                        j++;
                    }
                    return true;
                }
                else {
                    return false;
                }
            }
            return true;
        }
    }
};
