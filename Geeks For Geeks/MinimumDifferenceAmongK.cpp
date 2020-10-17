// Link to the problem : https://practice.geeksforgeeks.org/problems/minimum-difference-among-k/0/
// Problem Name : Minimum Difference among K
// Time Complexity : O(N * log N)
// Technique : Sorting

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N, K;
	    cin >> N >> K;
	    int arr[N];
	    for(int i = 0; i < N; i++) {
	        cin >> arr[i];
	    }
	    sort(arr, arr + N);
	    int diff = arr[N-1] - arr[0];
	    for(int i = 0; i < N - K; i++) {
	        int temp = arr[K + i - 1] - arr[i];
	        if(temp < diff) {
	            diff = temp;
	        }
	    }
	    cout << diff << endl;
 	}
	return 0;
}
