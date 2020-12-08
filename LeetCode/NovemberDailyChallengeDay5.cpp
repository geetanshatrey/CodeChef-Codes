// Link to the problem : https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/564/week-1-november-1st-november-7th/3520/
// Problem Name : Consecutive Characters

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even = 0, odd = 0;
        for(int i : position) {
            if(i % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if(even == position.size() || odd == position.size()) {
            return 0;
        }
        else {
            if(even > odd) {
                return odd;
            }
            else {
                return even;
            }
        }
    }
};
