// Link to the problem : https://practice.geeksforgeeks.org/problems/maximum-money2855/1/
// Problem Name : Maximum money
// Time Complexity : O(1)
// Technique : If-Else 


class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        int num;
        if(N % 2 == 0) {
            num = N/2;
        }
        else {
            num = N/2 + 1;
        }
        int res = K * num;
        return res;
    }
};