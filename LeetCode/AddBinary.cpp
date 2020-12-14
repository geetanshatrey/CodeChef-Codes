// Link to the problem : https://leetcode.com/problems/add-binary/
// Problem Name : Add Binary

class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.length() - 1;
        int n2 = b.length() - 1;
        string res = "";
        char c = ' ';
        while(n1 >= 0 && n2 >= 0) {
            if(a[n1] == '1') {
                if(b[n2] == '0') {
                    if(c == '1') {
                        res = "0" + res; 
                    }
                    else {
                        res = "1" + res;
                    }
                }
                else {
                    if(c == '1') {
                        res = "1" + res; 
                    }
                    else {
                        res = "0" + res;
                        c = '1';
                    }
                }
            }
            else {
                if(b[n2] == '0') {
                    if(c == '1') {
                        res = "1" + res; 
                        c = '0';
                    }
                    else {
                        res = "0" + res;
                    }
                }
                else {
                    if(c == '1') {
                        res = "0" + res; 
                    }
                    else {
                        res = "1" + res;
                    }
                }
            }
            n1--;
            n2--;
        }
        while(n1 >= 0) {
            if(a[n1] == '1') {
                if(c == '1') {
                    res = "0" + res;
                }
                else {
                    res = "1" + res;
                }
            }
            else {
                if(c == '1') {
                    res = "1" + res;
                    c = '0';
                }
                else {
                    res = "0" + res;
                }
            }
            n1--;
        }
        while(n2 >= 0) {
            if(b[n2] == '1') {
                if(c == '1') {
                    res = "0" + res;
                }
                else {
                    res = "1" + res;
                }
            }
            else {
                if(c == '1') {
                    res = "1" + res;
                    c = '0';
                }
                else {
                    res = "0" + res;
                }
            }
            n2--;
        }
        if(c == '1') {
            res = "1" + res;
        }
        return res;
        
    }
};
