// Link to the problem : https://practice.geeksforgeeks.org/problems/sort-in-specific-order2422/1/
// Problem Name : Sort in specific order
// Time Complexity : O(N * log N)
// Technique : Sorting + Vector

class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<int> a,b;
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) {
                b.push_back(arr[i]);
            }
            else {
                a.push_back(arr[i]);
            }
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end());
        a.insert(a.end(), b.begin(), b.end());
        for(int i = 0; i < n; i++) {
            arr[i] = a[i];
        }
        
    }
};
