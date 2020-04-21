//Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3286/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int N=nums.size();
        int res[N];
        int count=0,k=0;
        for(int i=0;i<N;i++){
            if(nums[i]==0){
                count++;
            }
            else{
                res[k]=nums[i];
                k++;
            }
        }
        for(int i=0;i<count;i++){
            res[k]=0;
            k++;
        }
        for(int i=0;i<N;i++){
            nums[i]=res[i];
        }
    }
};
