// Link to the problem : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/554/week-1-september-1st-september-7th/3447/
// Problem Name : Repeated Substring Pattern
// Solution Method : String + STL

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string x = s;
        s = s + s;
        s = s.substr(1, s.length() - 2);
        size_t found = s.find(x);
        if (found != string::npos) {
            return true;
        } 
        else {
            return false;
        }
    }
};
