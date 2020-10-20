// Link to the problem : https://leetcode.com/problems/k-closest-points-to-origin/
// Problem Name : K Closest Points to Origin
// Solution Method : Sorting

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector< vector<int> > res, ans;
        for(int i = 0; i < points.size(); i++) {
            int dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            vector<int> temp;
            temp.push_back(dist);
            temp.push_back(i);
            res.push_back(temp);
        }
        sort(res.begin(), res.end());
        int n = res.size();
        for(int i = 0; i < K && i < n; i++) {
            ans.push_back(points[res[i][1]]);
        }
        return ans;
    }
};
