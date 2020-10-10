// Link to the problem : https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1/
// Problem Name : Check if array is sorted
// Time Complexity : O(N)
// Technique : Traversal

class Solution{   
public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] > arr[i+1])
                return false;
        }
        return true;
    }
};
