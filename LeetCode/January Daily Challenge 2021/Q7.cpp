// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3595/
// Problem Name : Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        unordered_map<char,bool> um;
        int max_len = 0;
        int i = 0, j = 0;
        while(j < len) {
            if(um[s[j]] == true) {
                if(j - i > max_len) {
                    max_len = j - i;
                }
                i = i + 1;
                j = i;
                um.clear();
            }
            else {
                um[s[j]] = true; 
                j++;
            }
        }
        if(j - i > max_len) {
            max_len = j - i;
        }
        return max_len;
    }
};
