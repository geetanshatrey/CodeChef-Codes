// Link to the problem : https://practice.geeksforgeeks.org/problems/unusual-string-sort/0/
// Problem Name : Unusual String Sort
// Time Complexity : O(N * log N)
// Technique : Sorting + String

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    string a, temp = "", res = "";
	    cin >> a;
	    sort(a.begin(), a.end());
	    int i = 0, k = 0;
	    for(i = 0; i < a.length(); i++) {
	        if(a[i] >= 97) {
	            break;
	        }
	        else {
	            temp = temp + a[i];
	        }
	    }
	    int j = 0;
	    while(j < temp.length() && i < a.length()) {
	        if(j == 0) {
	            res += temp[j];
	            j++;
	        }
	        res += a[i];
	        i++;
	        res += temp[j];
	        j++;
	    }
	    while(j < temp.length()) {
	        res += temp[j];
	        j++;
	    }
	    while(i < a.length()) {
	        res += a[i];
	        i++;
	    }
	    cout<< res << endl; 
	}
	return 0;
}
