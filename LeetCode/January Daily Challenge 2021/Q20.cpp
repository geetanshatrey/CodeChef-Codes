// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3610/
// Problem Name : Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '[' || s[i] == '{' || s[i] == '(') {
                open.push(s[i]);
            }
            else {
                if(!open.empty()) {
                    char x = open.top();
                    open.pop();
                    if(s[i] == ')') {
                        if(x != '(') {
                            return false;
                        }
                    }
                    else if(s[i] == ']') {
                        if(x != '[') {
                            return false;
                        }
                    }
                    else {
                        if(x != '{') {
                            return false;
                        }
                    }
                }
                else {
                    return false;
                }
            }
        }
        if(open.empty())
            return true;
        else
            return false;
    }
};
