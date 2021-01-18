// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3608/
// Problem Name : Max Number of K-Sum Pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long int c = 0, l = 0, r = nums.size() - 1;
        while(l < r) {
            if(nums[l] + nums[r] < k) {
               l++; 
            }
            else if (nums[l] + nums[r] > k) {
                r--;
            }
            else {
                c++;
                l++;
                r--;
            }
        }
        return c;
    }
};
