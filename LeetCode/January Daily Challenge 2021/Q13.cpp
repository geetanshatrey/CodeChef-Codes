// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3602/
// Problem Name : Boats to Save People

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int c = 0;
        int i = 0, j = people.size() - 1;
        while(i <= j) {
            if(i == j) {
                c++;
                break;
            }
            if(people[i] + people[j] <= limit) {
                c++;
                i++;
                j--;
            }
            else {
                c++;
                j--;
            }
        }
        return c;
    }
};
