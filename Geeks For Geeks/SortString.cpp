// Link to the problem : https://practice.geeksforgeeks.org/problems/sort-string/0/
// Problem Name : Sort String
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
	    string s;
	    cin >> s;
	    sort(s.begin(), s.end());
	    cout << s <<endl;
	}
	return 0;
}
