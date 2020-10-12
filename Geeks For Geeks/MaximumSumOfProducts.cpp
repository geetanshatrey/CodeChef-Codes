// Link to the problem : https://practice.geeksforgeeks.org/problems/maximum-possible-sum-of-products/0/
// Problem Name : Maximum Possible Sum of Products
// Time Complexity : O(N*log N)
// Technique : Sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    cin >> N;
	    vector<long long int> a, b;
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        a.push_back(x);
	    }
	    sort(a.begin(), a.end(), greater<long long int>());
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        b.push_back(x);
	    }
	    sort(b.begin(), b.end(), greater<long long int>());
	    long long int res1 = 0;
	    for(int i = 0; i < N; i++) {
	        res1 += a[i] * b[i];
	    }
	    cout << res1 <<endl;
	}
	return 0;
}