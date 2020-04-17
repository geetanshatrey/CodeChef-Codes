//Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int a : nums){
            x=x^a;
        }
        return x;
    }
};
