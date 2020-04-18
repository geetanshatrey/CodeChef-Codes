//Link to the problem: https://leetcode.com/contest/biweekly-contest-24/problems/minimum-value-to-get-positive-step-by-step-sum/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int N=nums.size();
        int a=0;
        vector<int> arr;
        for(int i=0;i<N;i++){
            a=a+nums[i];
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        if(arr[0]<0){
            return abs(arr[0])+1;
        }
        else{
            return 1;
        }
    }
};
