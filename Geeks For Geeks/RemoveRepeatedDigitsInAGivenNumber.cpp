// Link to the problem : https://practice.geeksforgeeks.org/problems/remove-repeated-digits-in-a-given-number/0/
// Problem Name : Remove repeated digits in a given number
// Time Complexity : O(N)
// Technique : Stack in STL 

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
	    stack<long int> res;
	    long int st = 0, en = 0;
	    for(long int i = 0; i < s.length() - 1; i++) {
	        if(s[i] == s[i+1]) {
	            st = i;
	            while(s[i] == s[i+1]) {
	                i++;
	            }
	            en = i;
	            res.push(st);
	            res.push(en);
	            st = 0;
	            en = 0;
	        }
	    }
	    while(!res.empty()) {
	        en = res.top();
	        res.pop();
	        st = res.top();
	        res.pop();
	        s.erase(st+1, en-st);
	    }
	    cout << s << endl;
	    
	}
	return 0;
}
