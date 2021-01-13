// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3597/
// Problem Name : Check If Two String Arrays are Equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = "", b = "";
        for(int i = 0; i < word1.size(); i++) {
            a += word1[i];
        }
        for(int i = 0; i < word2.size(); i++) {
            b += word2[i];
        }
        if(a == b) {
            return true;
        }
        else {
            return false;
        }
    }
};
