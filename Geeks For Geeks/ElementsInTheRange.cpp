// Link to the problem : https://practice.geeksforgeeks.org/problems/c-program-to-remove-consonants-from-a-string/0/
// Problem Name : Elements in the Range
// Time Complexity : O(NlogN)
// Technique : Searching + Vector

class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		vector<int> res;
		for(int i = 0; i < n; i++) {
		    if(arr[i] >= A && arr[i] <= B) {
		        res.push_back(arr[i]);
		    }
		}
		sort(res.begin(), res.end());
		vector<int>::iterator ip = unique(res.begin(), res.end());
        res.resize(std::distance(res.begin(), ip)); 
		int k = 0, i;
		for(i = A; i <= B && k < res.size(); i++) {
		    if(i != res[k]) {
		        return false;
		    }
		    k++;
		}
		if(i == B + 1)
		    return true;
		else 
		    return false;
    }
};
