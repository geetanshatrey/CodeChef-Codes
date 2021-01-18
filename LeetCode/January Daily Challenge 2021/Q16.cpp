// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3606/
// Problem Name : Kth Largest Element in an Array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};
