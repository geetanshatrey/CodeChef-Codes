// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3616/
// Problem Name : Check If All 1's Are at Least Length K Places Away

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int firstOccurence = -1, secondOccurence = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                if(firstOccurence == -1) {
                    firstOccurence = i;
                }
                else {
                    secondOccurence = i;
                    int diff = secondOccurence - firstOccurence;
                    if(diff <= k) {
                        return false;
                    }
                    firstOccurence = secondOccurence;
                }
            }
        }
        return true;
    }
};
