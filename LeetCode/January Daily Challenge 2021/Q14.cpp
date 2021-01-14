// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3603/
// Problem Name : Minimum Operations to Reduce X to Zero

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for (int num : nums) {
            total += num;
        }
        int n = nums.size();
        int maxi = -1;
        int left = 0;
        int current = 0;

        for (int right = 0; right < n; right++) {
            current += nums[right];
            while (current > total - x && left <= right) {
                current -= nums[left];
                left += 1;
            }
            if (current == total - x) {
                maxi = max(maxi, right - left + 1);
            }
        }
        return maxi != -1 ? n - maxi : -1;
    }
};
