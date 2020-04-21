//Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3287/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,curr=-1;
        bool hasAStock=false;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
               if(hasAStock==false){
                   curr=prices[i];
                   hasAStock=true;
               }
            }
            else{
                if(hasAStock==false){
                    
                }
                else{
                    profit=profit + prices[i]-curr;
                    hasAStock=false;
                    curr=-1;
                }
                
            }
        }
        if(curr!=-1){
            profit=profit+prices[prices.size()-1]-curr;
        }
        return profit;
    }
};
