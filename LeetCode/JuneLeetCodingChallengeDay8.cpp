// Link to the problem : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3354/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) {
            return true;
        }
        else if (n <= 0) {
            return false;
        }
        
        while(n >= 2){
            if(n % 2 != 0) {
                return false;
            }
            n = n / 2;
        }
        return true;
    }
};
