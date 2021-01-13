// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3594/
// Problem Name : Kth Missing Positive Number

class Solution {
public:
    int findKthPositive(vector<int>& A, int k) {
        int val = 1, z = val, temp = k;
        for(int i = 0; i < A.size() && k > 0; i++) {
            if(A[i] != val) {
                int x = A[i] - val;
                if(x >= k) {
                    z += k;
                    break;
                }
                else {
                    z = val;
                    k -= x;
                    val = A[i];
                }
            }
            val++;
        }
        if(k > 0) {
            z = val - 1 + k;
        }
        return z;
    }
};
