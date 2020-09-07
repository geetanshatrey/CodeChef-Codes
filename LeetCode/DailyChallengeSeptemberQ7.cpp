// Link to the problem : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/554/week-1-september-1st-september-7th/3451/
// Problem Name : Word Pattern
// Solution Method : Maps + STL Functions


class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> vals;
        int pos;
        string temp = "";
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == ' ') {
                pos = i;
                vals.push_back(temp);
                temp = "";
            }
            else {
                temp += str[i];
            }
        }
        vals.push_back(temp);
        if(pattern.length() != vals.size()) {
            return false;
        }
        map<char, string> res;
        vector<string> l;
        for(int i = 0; i < vals.size(); i++) {
            auto itr = res.find(pattern[i]);
            if(itr != res.end()) {
                if(vals[i] != itr->second) {
                    return false;
                }
            }
            else {
                if(auto it = find(l.begin(), l.end(), vals[i]) != l.end()) {
                    return false;
                }
                res.insert(pair<char,string>(pattern[i], vals[i]));
                l.push_back(vals[i]);
            }
        }
        return true;
    }
};
