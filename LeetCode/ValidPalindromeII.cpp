// Link to the problem : https://leetcode.com/problems/valid-palindrome-ii/
// Problem Name : Valid Palindrome II

class Solution {
public:
    bool validPalindrome(string s) {
        int deleted = 0;
        int f = 0, t = 0;
        int n = s.length();
        for(int i = 0; i < n/2; i++) {
            if(deleted == 0) {
                if(s[i] != s[n-i-1] && n-i-1 >= i) {
                    deleted++;
                    if(s[i] == s[n-i-2] && n-i-2 >= i) {
                        f = 1;
                    }
                    if(s[i+1] == s[n-i-1] && n-i-1 >= i + 1) {
                        t = 1;
                    }
                    if(f == 0 && t == 0) {
                        return false;
                    }
                }
            }
            else if(deleted == 1) {
                if(f == 1) {
                    if(n-i-2 >= i && s[i] != s[n-i-2])
                        f = 0;
                }
                
                if (t == 1) {
                    if(n-i-1 >= i+1 && s[i+1] != s[n-i-1]) {
                        t = 0;
                    }
                }
                
                if(f == 0 && t == 0)
                    return false;
            }
            else
                return false;
        }
        return true;
    }
};
