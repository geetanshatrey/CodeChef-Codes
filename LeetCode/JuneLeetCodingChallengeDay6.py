# Link to the problem : https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3352/

class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        people = sorted(people, key = lambda x :(-x[0], x[1]))
        ans = []
        for i in people:
            ans.insert(i[1], i)
        return ans
