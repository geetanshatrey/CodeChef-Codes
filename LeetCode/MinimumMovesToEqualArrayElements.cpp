// Link to the problem : https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// Problem Name : Minimum Moves to Equal Array Elements

class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            count += nums[i] - nums[0];
        }
        return count;
    }
};
