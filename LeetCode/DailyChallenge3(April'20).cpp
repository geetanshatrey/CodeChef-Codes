//Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3285/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_till_now=0, max_ending_here=0,r=0;
        int N=nums.size();
        for(int i=0;i<N;i++){
            max_ending_here+= nums[i];
            if(max_ending_here<0){
                max_ending_here=0;
            }
            else if(max_ending_here>max_till_now){
                max_till_now=max_ending_here;
                r=1;
            }
        }
        
        if(r==1){
            return max_till_now;
        }   
        else{
            int max=nums[0];
            for(int i=0;i<N;i++){
                if(nums[i]>max){
                    max=nums[i];
                }
            }
            return max;
        }
    }
};
