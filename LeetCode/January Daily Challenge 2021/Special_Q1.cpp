// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3588/
// Problem Name : Palindrome Permutation

class Solution {
public:
    bool canPermutePalindrome(string s) {
        map<char,int> mp;
        map<char,int>:: iterator itr;
        int even = 0, odd = 0;
        for(int i = 0; i < s.length(); i++) {
            itr = mp.find(s[i]);
            if(itr != mp.end()) {
                itr->second++;
            }
            else {
                mp.insert(make_pair(s[i], 1));
            }
        }
        for(itr = mp.begin(); itr != mp.end(); itr++) {
            if(itr->second % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if(odd > 1) {
            return false;
        }
        else {
            return true;
        }
        
    }
};
