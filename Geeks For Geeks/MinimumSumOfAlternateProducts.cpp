// Link to the problem : https://practice.geeksforgeeks.org/problems/minimize-sum-of-alternate-product/0/
// Problem Name : Minimize sum of alternate product
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
	    int N;
	    cin >> N;
	    vector<long long int> arr;
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(), arr.end());
	    long long int res = 0;
	    for(int i = 0; i < N/2; i++) {
	        res += arr[i] * arr[N - i - 1];
	    }
	    cout << res << endl;
	}
	return 0;
}
