#Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3288/

#Time Complexity: O(N^2)
#Error Faced : TLE (100/101 Cases Passed)

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        listFinal=[]
        values=[0]*len(strs)
        for i in range(0,len(strs)):
            tempList=[]
            if values[i] == 0:
                for j in range(0,len(strs)):
                    if values[j] == 0:
                        if (sorted(strs[i]) == sorted(strs[j])):
                            tempList.append(strs[j])
                            values[j] = 1
                listFinal.append(tempList)
        return listFinal
