// Link to the problem : https://leetcode.com/problems/majority-element/
// Problem Name : Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> res;
        unordered_map<int,int>::iterator itr;
        for(int i = 0; i < nums.size(); i++) {
            itr = res.find(nums[i]);
            if(itr != res.end()) {
                itr->second++;
                if(itr->second > nums.size()/2) {
                    return itr->first;
                }
            }
            else {
                res.insert(make_pair(nums[i], 1));
            }
        }
        return nums[0];
    }
};
