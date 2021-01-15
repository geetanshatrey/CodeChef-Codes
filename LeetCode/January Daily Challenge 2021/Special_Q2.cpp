// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3604/
// Problem Name : Nested List Weight Sum

class Solution {
public:
    int calculate(vector<NestedInteger>& nestedList, int level) {
        int sum = 0;
        for(int i = 0; i < nestedList.size(); i++) {
            if(nestedList[i].isInteger()) {
                sum += level * nestedList[i].getInteger();
            }
            else {
                sum += calculate(nestedList[i].getList(), level + 1);
            }
        }
        return sum;
    }
    int depthSum(vector<NestedInteger>& nestedList) {
        return calculate(nestedList, 1);
    }
};
