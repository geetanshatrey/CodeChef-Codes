// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3613/
// Problem Name : Determine if Two Strings Are Close

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> a1(26,0);
        vector<int> a2(26,0);
        vector<char> res1, res2;
        
        for(int i = 0; i < word1.length(); i++) {
            a1[word1[i] - 'a']++;
            if(a1[word1[i] - 'a'] == 1) {
                res1.push_back(word1[i]);
            }
        }
        
        for(int i = 0; i < word2.length(); i++) {
            a2[word2[i] - 'a']++;
            if(a2[word2[i] - 'a'] == 1) {
                res2.push_back(word2[i]);
            }
        }
        
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        sort(res1.begin(), res1.end());
        sort(res2.begin(), res2.end());
        
        if(res1.size() != res2.size()) {
            return false;
        }
        else {
            for(int i = 0; i < res1.size(); i++) {
                if(res1[i] != res2[i]) {
                    return false;
                }
            }
        }
        
        for(int i = 0; i < 26; i++) {
            if(a1[i] != a2[i]) {
                return false;
            }
        }
        return true;
    }
};
