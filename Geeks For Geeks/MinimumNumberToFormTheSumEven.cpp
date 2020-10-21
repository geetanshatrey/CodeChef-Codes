// Link to the problem : https://practice.geeksforgeeks.org/problems/minimum-number-to-form-the-sum-even0326/1/
// Problem Name : Minimum number to form the sum even
// Time Complexity : O(N)
// Technique : Array Traversal

class Solution{
	public:
	int minNum(long long int arr[],int n)
	{
	    // Your code goes here
	    long long int sum = 0;
	    for(int i =0; i < n; i++) {
	        sum += arr[i];
	    }
	    if(sum % 2 == 0) {
	        return 2;
	    }
	    else {
	        return 1;
	    }
	}
};
