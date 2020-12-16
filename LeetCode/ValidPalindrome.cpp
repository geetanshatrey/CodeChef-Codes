// Link to the problem : https://leetcode.com/problems/valid-palindrome/
// Problem Name : Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int left  = 0, right = s.length() - 1;
        while(left < right) {
            if(s[left] >=65 && s[left] <= 90) {
                s[left] = s[left] + 32;
            }
            else if(s[left] < 48 || s[left] > 57 && s[left] < 97 || s[left] > 122) {
                left++;
                continue;
            }
            if(s[right] >=65 && s[right] <= 90) {
                s[right] = s[right] + 32;
            }
            else if(s[right] < 48 || s[right] > 57 && s[right] < 97 || s[right] > 122) {
                right--;
                continue;
            }
            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
