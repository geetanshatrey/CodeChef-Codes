// Link to the problem : https://practice.geeksforgeeks.org/problems/the-problem-of-identical-arrays/0/
// Problem Name : The problem of identical arrays 
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
	    vector<int> a, b;
	    for(int i = 0; i < N; i++) {
	        int x;
	        cin >> x;
	        a.push_back(x);
	    }
	    for(int i = 0; i < N; i++) {
	        int x;
	        cin >> x;
	        b.push_back(x);
	    }
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	    if(a == b) {
	        cout << true <<endl;
	    }
	    else {
	        cout << false << endl;
	    }
	}
	return 0;
}
