// Link to the problem : https://practice.geeksforgeeks.org/problems/ishaans-internship/0/
// Problem Name : Ishaan's Internship 
// Time Complexity : O(N*(logN)/(logK))
// Technique : Searching

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N, K;
	    cin >> N >> K;
	    vector<int> res;
	    for(int i = 1; i <= N; i++) {
	        if(i % K == 0) {
	            res.push_back(i);
	        }
	    }
	    while(res.size() >= K) {
	        vector<int> temp;
	        for(int i = 0; i < res.size(); i++) {
	            if((i+1) % K == 0) {
	                temp.push_back(res[i]);
	            }
	        }
	        res = temp;
	    }
	    cout << res[0] << endl;
	}
	return 0;
}
