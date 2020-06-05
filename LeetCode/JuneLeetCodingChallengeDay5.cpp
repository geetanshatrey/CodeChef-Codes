// Link to the problem : https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3351/

class Solution {
public:
    vector<int> myList;
    int sum;
    Solution(vector<int>& w) {
        myList.push_back(0);
        sum = 0;
        for(int i = 0; i < w.size(); i++) {
            sum = sum + w[i];
            myList.push_back(sum);
        }
    }
    
    int pickIndex() {
        int randNumber = rand() % sum;
        int i;
        for(i = 0; i < myList.size()-1;i++) {
            if(randNumber >= myList[i] && randNumber < myList[i+1]) {
                return i;
            }
        }
        return i; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
