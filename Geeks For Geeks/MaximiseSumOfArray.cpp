// Link to the problem : https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array/0
// Problem Name : Maximize sum(arr[i]*i) of an Array
// Time Complexity : O(N * log N)
// Technique : Sorting + Vector

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
	    vector<int> arr;
	    for(int i = 0; i < N; i++) {
	        int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(), arr.end());
	    long long int res = 0;
	    for(int i = 0; i < N; i++) {
	        res += arr[i] * i;
	    }
	    long long int y = pow(10,9);
	    cout << res % (y + 7)<< endl;
	}
	return 0;
}