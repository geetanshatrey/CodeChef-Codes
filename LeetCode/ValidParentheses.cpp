// Link to the problem : https://leetcode.com/problems/valid-parentheses/
// Problem Name : Valid Parentheses
// Solution Method : String + Stack

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if(st.empty()) {
                    return false;
                }
                char x = st.top();
                if(s[i] == ')') {
                    if(x == '(') {
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }
                else if (s[i] == '}') {
                    if(x == '{') {
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }
                else {
                    if(x == '[') {
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
