# Link to the problem: https://leetcode.com/contest/biweekly-contest-24/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/

class Solution:
    def getHappyString(self, n: int, k: int) -> str:
        list=[]
        tempList=[]
        for i in range(n):
            if i==0:
                list.append("a")
                list.append("b")
                list.append("c")
            else:
                tempList=[] 
                for st in list:
                    if st.endswith("a") == True:
                        tempList.append(st+"b")
                        tempList.append(st+"c")
                    elif st.endswith("b") == True:
                        tempList.append(st+"a")
                        tempList.append(st+"c")
                    else:
                        tempList.append(st+"a")
                        tempList.append(st+"b")    
                list = tempList[:]
            
        if len(list)>=k:
            list.sort()
            x= list.pop(k-1)
            return x
        else:
            return ""
