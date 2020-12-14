// Link to the problem : https://leetcode.com/problems/merge-sorted-array/
// Problem Name : Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int i = 0, j = 0;
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                res.push_back(nums1[i]);
                i++;
            }
            else {
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m) {
            res.push_back(nums1[i]);
            i++;
        }
        while(j < n) {
            res.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        for(int i = 0; i < res.size(); i++) {
            nums1.push_back(res[i]);
        }
    }
};
