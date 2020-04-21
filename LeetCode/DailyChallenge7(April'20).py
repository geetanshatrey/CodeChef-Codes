#Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3289/

class Solution:
    def countElements(self, arr: List[int]) -> int:
        c = 0
        for i in arr:
            x=arr.count(i+1)
            if x >= 1:
                c = c + 1
        return c
