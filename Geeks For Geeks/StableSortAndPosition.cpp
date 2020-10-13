// Link to the problem : https://practice.geeksforgeeks.org/problems/stable-sort-and-position1359/1/
// Problem Name : Stable Sort and Position
// Time Complexity : O(N)
// Technique : Traversal

class Solution{
	public:
	int getIndexInSortedArray(int arr[], int n, int idx)
	{
	    // Your code goes here
	    int x = arr[idx];
	    int c = 0;
	    for(int i = 0; i < n; i++) {
	        if(i < idx && arr[i] <= x) {
	            c++;
	        }
	        if(i > idx && arr[i] < x) {
	            c++;
	        }
	    }
	    return c;
	}
};
