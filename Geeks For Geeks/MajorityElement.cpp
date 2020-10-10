// Link to the problem : https://practice.geeksforgeeks.org/problems/majority-element/0
// Problem Name : Majority Element
// Time Complexity : O(N)
// Technique : Searching + Unordered Maps

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	long int T;
	cin >> T;
	while(T--) {
	    long int N;
	    cin >> N;
	    long int x;
	    unordered_map<long int,long int> res;
	    for(long int i = 0; i < N; i++) {
	        cin >> x;
	        res[x]++;
	    }
	    int count = 1, element = -1;
	    for(auto i : res) {
	        if(i.second > count) {
	            count = i.second;
	            element = i.first;
	        }
	    }
	    if(count <=N/2) {
	        cout << "-1" <<endl;
	    }
	    else {
	       cout << element << endl; 
	    }
	}
	return 0;
}
