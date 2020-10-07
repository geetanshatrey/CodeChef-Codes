// Link to the problem : https://practice.geeksforgeeks.org/problems/last-index-of-1/0/
// Problem Name : Last Index of One
// Time Complexity : O(N)
// Technique : Linear Search


#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    string s;
	    cin >> s;
	    int ind = -1;
	    for(int i = s.length() - 1; i >=0; i--) {
	        if(s[i] == '1') {
	            ind = i;
	            break;
	        }
	    }
	    cout << ind << endl;
	}
	return 0;
}
