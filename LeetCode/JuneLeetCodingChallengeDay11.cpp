// Link to the solution : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3357/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c = 0, curr = 0, temp, r;
        r = nums.size() - 1;
        while(curr <= r) {
            if(nums[curr] == 0) {
                temp = nums[curr];
                nums[curr] = nums[c];
                nums[c] = temp;
                c++;
                curr++;
            }
            else if(nums[curr] == 2) {
                temp = nums[r];
                nums[r] = nums[curr];
                nums[curr] = temp;      
                r--;
            }
            else {
                curr++;
            }
        }
        
    }
};
