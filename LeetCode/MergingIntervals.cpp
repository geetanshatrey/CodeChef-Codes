// Link to the problem : https://leetcode.com/problems/merge-intervals/
// Problem Name : Merge Intervals
// Solution Method : Sorting

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty())
            return intervals;
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        int i = 0;
        int n = intervals.size();
        while(i < n ) {
            if(i == n - 1 || intervals[i][1] < intervals[i+1][0]) {
                vector<int> l;
                l.push_back(intervals[i][0]);
                l.push_back(intervals[i][1]);
                res.push_back(l);
                
            }
            else if(intervals[i][1] >= intervals[i+1][0]) {
                if(intervals[i][0] < intervals[i+1][0]) {
                    intervals[i+1][0] = intervals[i][0];
                }
                if(intervals[i][1] > intervals[i+1][1]) {
                    intervals[i+1][1] = intervals[i][1];
                }
            }
            i++;
        }
        return res;
    }
};
