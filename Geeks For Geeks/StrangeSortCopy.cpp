// Link to the problem : https://practice.geeksforgeeks.org/problems/strange-sort4316/1/
// Problem Name : Strange Sort - copy
// Time Complexity : O(N * log N)
// Technique : Sorting

class Solution
{
    public:
        void strangeSort (int arr[], int n, int k)
            {
            	//code here.
            	vector<int> a;
            	int b = arr[k-1];
            	for(int i = 0; i < n; i++) {
            	    if(i != k-1) {
            	        a.push_back(arr[i]);
            	    }
            	}
                sort(a.begin(), a.end());
                a.push_back(0);
                for(int i = a.size()-1; i>=k-1;i--) {
                    if(i == k - 1) {
                        a[i] = b;
                        break;
                    }
                    a[i] = a[i-1];
                }
                for(int i = 0; i < n; i++) {
                    arr[i] = a[i];
                }
            }

};
