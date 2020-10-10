// Link to the problem : https://practice.geeksforgeeks.org/problems/doubling-the-value/0/
// Problem Name : Doubling the value 
// Time Complexity : O(N)
// Technique : Searching + Vector

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	long int T;
	cin >> T;
	while(T--) {
	    long long int N, B;
	    cin >> N >> B;
	    vector<unsigned long long int> arr;
	    for(int i = 0; i < N; i++) {
	        unsigned long long int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    while(find(arr.begin(), arr.end(),B) != arr.end()) {
	       B = B*2;
	    }
	    cout << B << endl;
	}
	return 0;
}