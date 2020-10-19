// Link to the problem : https://practice.geeksforgeeks.org/problems/part-sort2851/1/
// Problem Name : Part Sort
// Time Complexity : O(N * log N)
// Technique : Sorting

class Solution{
public:		
	
	void partSort(vector<int> &arr, int n, int l, int r)
	{
	    // Your code goes here
	    if(l > r) {
	        int temp = l;
	        l = r;
	        r = temp;
	    }
	    vector<int> res;
	    for(int i = l; i <= r; i++) {
	        res.push_back(arr[i]);
	    }
	    sort(res.begin(), res.end());
	    for(int i = l; i <= r; i++) {
	        arr[i] = res[i-l];
	    }
	}
};
