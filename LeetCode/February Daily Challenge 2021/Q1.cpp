// Link to the problem : https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/584/week-1-february-1st-february-7th/3625/
// Problem Name : Number of 1 Bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;
        while(n > 0) {
            if(n & 1) {
                c++;
            }
            n = n >> 1;
        }
        return c;
    }
};
