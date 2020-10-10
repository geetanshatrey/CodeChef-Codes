// Link to the problem : https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements/0/
// Problem Name : At least two greater elements
// Time Complexity : O(N*logN)
// Technique : Sorting + Vector


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
	    vector<int> arr;
	    for(int i = 0; i < N; i++) {
	        int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(), arr.end());
	    for(int i = 0; i < N-2; i++) {
	        cout<< arr[i] <<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
