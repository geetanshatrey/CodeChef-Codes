// Link to the problem : https://practice.geeksforgeeks.org/problems/minimum-product-of-k-integers/0/
// Problem Name : Minimum Product of k Integers
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
	    cin >> N;
	    vector<long long int> arr;
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    cin >> K;
	    sort(arr.begin(), arr.end());
	    long long int res = 1;
	    long long int y = pow(10,9);
	    y += 7;
	    for(int i = 0; i < K; i++) {
	        res *= arr[i];
	        res = res % y;
	    }
	    cout << res << endl;
	}
	return 0;
}
