// Link to the problem : https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product/0/
// Problem Name : Minimize the sum of product
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
	    vector<long long int> a, b, aSorted, bSorted;
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        a.push_back(x);
	        aSorted.push_back(x);
	    }
	    sort(aSorted.begin(), aSorted.end());
	    sort(a.begin(), a.end(), greater<long long int>());
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        b.push_back(x);
	        bSorted.push_back(x);
	    }
	    sort(bSorted.begin(), bSorted.end());
	    sort(b.begin(), b.end(), greater<long long int>());
	    long long int res1 = 0, res2 = 0;
	    for(int i = 0; i < N; i++) {
	        res1 += aSorted[i] * b[i];
	    }
	    for(int i = 0; i < N; i++) {
	        res2 += bSorted[i] * a[i];
	    }
	    if(res1 > res2) {
	        cout << res2 <<endl;
	    }
	    else {
	        cout << res1 <<endl;
	    }
	}
	return 0;
}
