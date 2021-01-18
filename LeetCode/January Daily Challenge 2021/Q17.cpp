// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3607/
// Problem Name : Count Sorted Vowel Strings

class Solution {
public:
    int countVowelStrings(int n) {
        return (n + 4) * (n + 3) * (n + 2) * (n + 1) / 24;
    }
};
