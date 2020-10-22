// Link to the problem : https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/1/
// Problem Name : Immediate Smaller Element
// Time Complexity : O(N)
// Technique : Array Traversal

class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
	    //  code here
	    for(int i = 0; i < n-1; i++) {
	        if(arr[i+1] < arr[i]) {
	            arr[i] = arr[i+1];
	        }
	        else {
	            arr[i] = -1;
	        }
	    }
	    arr[n-1] = -1;
	    
	}
};