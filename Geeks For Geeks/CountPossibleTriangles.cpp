// Link to the problem : https://practice.geeksforgeeks.org/problems/count-possible-triangles/0/
// Problem Name : Count possible triangles
// Time Complexity : O(N^2)
// Technique : Sorting + Logic

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    cin >>N;
	    vector<int> arr;
	    for(int i = 0; i < N; i++) {
	        int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(), arr.end());
	    long int tot = 0;
	    for(int i = 0; i < N - 2; i++) {
	        int k = i + 2;
	        for(int j = i + 1; j < N; j++) {
	            while(k < N && arr[i] + arr[j] > arr[k]) {
	                k++;
	            }
	            if(k > j) {
	                tot += k - j - 1;
	            }
	        }
	    }
	    cout << tot << endl;
	}
	return 0;
}
