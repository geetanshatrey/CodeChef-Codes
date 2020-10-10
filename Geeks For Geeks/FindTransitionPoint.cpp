// Link to the problem : https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/
// Problem Name : Find Transition Point
// Time Complexity : O(log N)
// Technique : Binary Search

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// Function to find the transition point
int transitionPoint(int arr[], int n) {
    // code here
        int l = 0, r = n-1;
	    while(l <= r) {
	        int mid = (l + r) /2;
	        if(arr[mid] == 1 && arr[mid-1] == 0) {
	            return mid;
	        }
	        else if(arr[mid] == 1) {
	            r = mid - 1;
	        }
	        else {
	            l = mid + 1;
	        }
	    }
	    return -1;
}
