// Link to the problem : https://leetcode.com/problems/add-strings/
// Problem Name : Add Strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length() - 1;
        int len2 = num2.length() - 1;
        int c = 0;
        string res = "";
        while(len1 >= 0 && len2 >= 0) {
            int c1 = num1[len1] - '0';
            int c2 = num2[len2] - '0';
            int c3 = c1 + c2 + c;
            c = c3 / 10;
            c3 = c3 % 10;
            res = to_string(c3) + res;
            len1--;
            len2--;
        }
        while(len1 >= 0) {
            int c1 = num1[len1] - '0';
            c1 += c;
            c = c1 / 10;
            c1 = c1 % 10;
            res = to_string(c1) + res;
            len1--;
        }
        while(len2 >= 0) {
            int c2 = num2[len2] - '0';
            c2 += c;
            c = c2 / 10;
            c2 = c2 % 10;
            res = to_string(c2) + res;
            len2--;
        }
        if(c != 0) {
            res = to_string(c) + res;
        }
        return res;
    }
};
