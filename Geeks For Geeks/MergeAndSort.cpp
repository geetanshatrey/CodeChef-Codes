// Link to the problem : https://practice.geeksforgeeks.org/problems/merge-and-sort/0/
// Problem Name : Merge and Sort
// Time Complexity : O(N^2)
// Technique : Sorting + Merge Algorithm + Vector

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
	    vector< vector<int> > res;
	    for(int i = 0; i < N; i++) {
	        int n;
	        cin >> n;
	        vector<int> a;
	        for(int j = 0; j < n; j++) {
	            int x;
	            cin >> x;
	            a.push_back(x);
	        } 
	        sort(a.begin(), a.end());
	        res.push_back(a);
	    }
	    vector<int> ans;
	    int arr[res.size()] = {0};
	    while(true) {
	        int min = 100;
	        int index = -1;
	        int f = 0;
	        for(int z = 0; z < res.size(); z++) {
	            if(arr[z] < res[z].size()) {
	                if(res[z][arr[z]] < min) {
	                    min = res[z][arr[z]];
	                    index = z;
	                }
	            }
	            else {
	                f++;
	            }
	        }
	        if(f == res.size()) {
	            break;
	        }
	        ans.push_back(min);
	        arr[index]++;
	    }
	    vector<int>::iterator ip; 
	    ip = unique(ans.begin(), ans.end());
        ans.resize(std::distance(ans.begin(), ip)); 
	    
	    for(int i = 0; i < ans.size(); i++) {
	        cout << ans[i] << " ";
	    }
	    cout<<endl;
	}
	return 0;
}
