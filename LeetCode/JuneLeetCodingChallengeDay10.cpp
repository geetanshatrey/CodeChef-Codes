// Link to the problem : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3356/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator ptr = find(nums.begin(), nums.end(), target);
        if(ptr == nums.end()) {
            if(nums[nums.size() - 1] == target) {
                return nums.size() - 1;
            }
            else {
                nums.push_back(target);
                sort(nums.begin(), nums.end());
                ptr = find(nums.begin(), nums.end(), target);
                return ptr - nums.begin();
            }
        }
        else {
            return ptr - nums.begin();
        }
    }
};
