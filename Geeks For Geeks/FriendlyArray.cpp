// Link to the problem : https://practice.geeksforgeeks.org/problems/friendly-array2009/1/
// Problem Name : Friendly Array
// Time Complexity : O(N * log N)
// Technique : Sorting

class Solution
{
  public:
    int sumOfMinAbsDifferences(int arr[], int n)
    {   
        //code here.
        sort(arr, arr+n);
        int res = 0;
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                int a = abs(arr[i] - arr[n-1]);
                int b = abs(arr[i] - arr[i+1]);
                if(a > b ) {
                    res += b;
                }
                else {
                    res += a;
                }
                continue;
            }
            if(i == n - 1) {
                int a = abs(arr[i] - arr[0]);
                int b = abs(arr[i] - arr[i - 1]);
                if(a > b ) {
                    res += b;
                }
                else {
                    res += a;
                }
                continue;
            }
            int a = abs(arr[i] - arr[i+1]);
            int b = abs(arr[i] - arr[i-1]);
            if(a > b) {
                res += b;
            } 
            else {
                res += a;
            }
            
        }
        return res;
    }
};
