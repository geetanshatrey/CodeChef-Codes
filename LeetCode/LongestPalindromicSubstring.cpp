// Link to the problem : https://leetcode.com/problems/longest-palindromic-substring/
// Problem Name : Longest Palindromic Substring
// Solution Method : Expand through Center
// Time Complexity : O(N^2)

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
            int l = max(len1, len2);
            if(l > end - start) {
                start = i - (l-1)/2 ;
                end = i + l/2;
                
            }
        }
        return s.substr(start, end - start + 1);
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
