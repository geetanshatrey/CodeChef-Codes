// Link to the problem : https://leetcode.com/problems/high-five/
// Problem Name : High Five

class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        vector<int> temp;
        vector<int> p;
        vector<vector<int>> res(1001, temp);
        for(int i = 0; i < 1001; i++) {
            temp.push_back(-1);
        }
        for(int i = 0; i < items.size(); i++) {
            int x = items[i][0];
            int y = items[i][1];
            if(res[x].size() != 0) {
                if(res[x].size() >= 5) {
                    if(y > temp[x]) {
                        res[x].push_back(y);
                        int k = -1;
                        int min = INT_MAX;
                        for(int j = 0; j < res[x].size(); j++) {
                            if(res[x][j] == temp[x] && k == -1) {
                                k = j;
                                continue;
                            }
                            if(res[x][j] < min) {
                                min = res[x][j];
                            }
                        } 
                        res[x].erase(res[x].begin() + k);
                        temp[x] = min;
                    }
                }
                else {
                    res[x].push_back(y);
                    if(y < temp[x]) {
                        temp[x] = y;
                    }
                }
            }
            else {
                res[x].push_back(y);
                temp[x] = y;
                p.push_back(x);
            }         
        }
        vector<vector<int>> ans;
        for(int i = 0; i < p.size(); i++) {
            int sum = 0;
            for(int j = 0; j < res[p[i]].size(); j++) {
                sum += res[p[i]][j];
            }
            sum /= 5;
            vector<int> l;
            l.push_back(p[i]);
            l.push_back(sum);
            ans.push_back(l);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
