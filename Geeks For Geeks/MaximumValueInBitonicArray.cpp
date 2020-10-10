// Link to the problem : https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1/
// Problem Name : Maximum value in a bitonic array
// Time Complexity : O(log N)
// Technique : Binary Search

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int l = 0, r = n-1;
	    while(l <= r) {
	        int mid = (l + r) /2;
	        if(arr[mid] > arr[mid +1] && arr[mid] > arr[mid -1]) {
	            return arr[mid];
	        }
	        else if(arr[mid] > arr[mid + 1]) {
	            r = mid - 1;
	        }
	        else {
	            l = mid + 1;
	        }
	    }
	}
};
