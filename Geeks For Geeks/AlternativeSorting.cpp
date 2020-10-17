// Link to the problem : https://practice.geeksforgeeks.org/problems/alternative-sorting1311/1/
// Problem Name : Alternative Sorting 
// Time Complexity : O(N * log N)
// Technique : Sorting


class Solution{
	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    sort(arr, arr + N);
	    int l = 0, m =0;
	    vector<int> asc, dsc, res;
	    for(int i =0; i < N; i++) {
	        asc.push_back(arr[i]);
	    }
	    for(int i = N - 1; i >=0; i--) {
	        dsc.push_back(arr[i]);
	    }
	    int i = 0;
	    while(i < N) {
	        if(i % 2 != 0) {
	            res.push_back(asc[l]);
	            l++;
	        }
	        else {
	            res.push_back(dsc[m]);
	            m++;
	        }
	        i++;
	    }
	    return res;
	}

};
