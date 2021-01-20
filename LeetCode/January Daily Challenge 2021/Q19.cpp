// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3609/
// Problem Name : Longest Palindromic Substring

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() < 1) {
            return "";
        }
        int start = 0, end = 0;
        for(int i = 0; i < s.length(); i++) {
            int len1 = expandTheString(s, i, i);
            int len2 = expandTheString(s, i, i+1);
            int len = max(len1, len2);
            if(len > end - start) {
                start = i - (len-1)/2 ;
                end = i + len/2;
                
            }
        }
        return s.substr(start, end-start+1);
    }
    
    int expandTheString(string s, int left, int right) {
        if(left > right || s.length() < 1) {
            return 0;
        }
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return (right - left - 1);
    }
   
};
