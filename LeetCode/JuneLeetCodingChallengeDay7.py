# Link to the problem : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3353/

class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        dp = [0] * (amount + 1)
        dp[0] = 1
        
        for coin in coins :
            for x in range(coin, amount + 1):
                dp[x] = dp[x] + dp[x - coin]
        return dp[amount]
