// Link to the problem : https://leetcode.com/problems/palindrome-number/
// Problem Name : Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        int c = 0;
        if(x < 0) {
            return false;
        }
        if(x == 0) {
            return true;
        }
        int m = x;
        while(m > 0) {
            m /= 10;
            c++;
        }
        int arr[c];
        int i = 0;
        while(x > 0 && i < c) {
            arr[i] = x % 10;
            x /= 10;
            i++;
        }
        for(i = 0; i < c/2; i++) {
            if(arr[i] != arr[c - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
