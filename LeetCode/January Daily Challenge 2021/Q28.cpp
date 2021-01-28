// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3619/
// Problem Name : Smallest String With A Given Numeric Value

class Solution {
public:
    string getSmallestString(int n, int k) {
        string s = "";
        for(int i = 0; i < n; i++) {
            s += "a";
        }
        if(n == k) {
            return s;
        }
        else {
            int j = n - 1;
            while(k > 0) {
                if(k - n < 26) {
                    s[j] = s[j] + k - n;
                    return s;
                }
                else {
                    char a = s[j];
                    s[j] = 'z';
                    int x = 'z' - a;
                    k = k - x;
                }
                j--;
            }
        }
        return s;
    }
};
