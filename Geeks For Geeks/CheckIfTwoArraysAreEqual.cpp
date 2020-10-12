// Link to the problem : https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not/0/
// Problem Name : Check if two arrays are equal or not
// Time Complexity : O(NlogN)
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
	    vector<long long int> a, b;
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        a.push_back(x);
	    }
	    sort(a.begin(), a.end());
	    
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        b.push_back(x);
	    }
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