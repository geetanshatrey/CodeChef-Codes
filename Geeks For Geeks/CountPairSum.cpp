// Link to the problem : https://practice.geeksforgeeks.org/problems/count-pair-sum5956/1/
// Problem Name : Count pair sum 
// Time Complexity : O(M + N)
// Technique : Sorting

class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        //code here.
        int noOfPairs = 0;
        int m1[10001] = {0}, m2[10001] = {0}; 
        for(int i = 0; i < m; i++) {
            m1[arr1[i]]++;
        } 
        
        for(int i = 0; i < n; i++) {
            m2[arr2[i]]++;
        }
        for(int i = 0; i < m; i++) {
            if(x - arr1[i] < 0) {
                break;
            }
            if(m2[x - arr1[i]] == 1) {
                m2[x - arr1[i]] = 0;
                noOfPairs++;
            }
        }
        return noOfPairs;
    } 
};