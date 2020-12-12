// Link to the problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Problem Name : Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxElement = 0, minElement = INT_MAX;
        for(int i = 0; i < prices.size() ; i++) {
            if(prices[i] < minElement) {
                minElement = prices[i];
            }
            else if(prices[i] - minElement > maxElement) {
                maxElement = prices[i] - minElement;
            }
        }
        return maxElement;
    }
};
