// Link to the problem : https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff;
        int score = 0;
        for(int i = 0; i < costs.size(); i++) {
            score = score + costs[i][0];
            diff.push_back(costs[i][1] - costs[i][0]);
        }
        sort(diff.begin(), diff.end());
        
        for(int i = 0; i < costs.size()/2; i++) {
            score = score + diff[i];
        }
        
        return score;
    }
};
