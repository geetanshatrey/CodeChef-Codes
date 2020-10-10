// Link to the problem : https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1
// Problem Name : Find the element that appears only once in the array.
// Time Complexity : O(log N)
// Technique : Searching + Logic

class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int l = 0;
        int r = n-1;
        while(l < r) {
            int m = (l + r)/2;
            if(arr[m] == arr[m+1]) {
                if(m % 2 != 0)
                    r = m - 1;
                else 
                    l = m;
            }
            else if(arr[m] == arr[m-1]) {
                if(m % 2 == 0)
                    r = m;
                else 
                    l = m + 1;
            }
            else {
                return arr[m];
            }
        }
        if(l == r) {
            return arr[l];
        }
    }
};
