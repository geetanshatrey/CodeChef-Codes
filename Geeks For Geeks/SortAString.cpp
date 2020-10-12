// Link to the problem : https://practice.geeksforgeeks.org/problems/sort-a-string/0/
// Problem Name : Sort a String
// Time Complexity : O(N*logN)
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
	    string s;
	    cin >> s;
	    sort(s.begin(), s.end());
	    cout << s <<endl;
	}
	return 0;
}
