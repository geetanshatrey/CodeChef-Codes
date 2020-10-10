// Link to the problem : https://practice.geeksforgeeks.org/problems/c-program-to-remove-consonants-from-a-string/0/
// Problem Name : Remove consonants from a string
// Time Complexity : O(N)
// Technique : Searching + String

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T;
	cin >> T;
	cin >> ws;
	while(T--) {
	    string s, res = "";
	    getline(cin, s);
	    for(int i = 0; i < s.length(); i++) {
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == ' ') {
	            res += s[i];
	        }
	    }
	    if(res == "")
	        cout<<"No Vowel" <<endl;
	    else
	        cout << res << endl;
	}
	return 0;
}
