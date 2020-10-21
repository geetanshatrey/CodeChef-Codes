// Link to the problem : https://practice.geeksforgeeks.org/problems/balanced-array07200720/1/
// Problem Name : Balanced Array 
// Time Complexity : O(N)
// Technique : Array Traversal

class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       long int sum1 = 0, sum2 = 0, i;
       for(i = 0; i < n; i++) {
           if(i < n/2) {
               sum1 += a[i];
           }
           else {
               sum2 += a[i];
           }
       }
       return abs(sum2 - sum1);
    }
};
