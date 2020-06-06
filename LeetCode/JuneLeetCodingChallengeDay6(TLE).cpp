// This solution got TLE error. 28/37 test cases passed.
// Link to the problem :https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3352/

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end());
        int arr[people.size()];
        int i,j;
        int count = 0;
        for(i = people.size() - 1; i >= 0; i--) {
            count = people[i][1];
            if(count != 0) {
                for(j = 0; j<i;j++) {
                    if(people[j][0] >= people[i][0]) {
                        count--;
                    }
                }   
            }
            
            if(count == 0) {
                continue;
            }
            else {
                int temp1, temp2;
                temp1 = people[i][0];
                temp2 = people[i][1];
                for(int k = 0; k < count; k++) {
                    people[k+i][0] = people[k+i+1][0];
                    people[k+i][1] = people[k+i+1][1];
                }
                people[i+count][0] = temp1;
                people[i+count][1] = temp2;
                i = i + count;
            }
        }
        return people;
    }
};
