// Link to the problem : https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1/
// Problem Name : k largest elements
// Time Complexity : O(N * log N)
// Technique : Sorting

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr, arr+n);
	    vector<int> res;
	    for(int i = n-1; i > 0 && k > 0; i--) {
	        res.push_back(arr[i]);
	        k--;
	    }
	    return res;
	}

};
