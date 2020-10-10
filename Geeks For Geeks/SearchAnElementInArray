// Link to the problem : https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array/0/
// Problem Name : Search an Element in an array
// Time Complexity : O(N)
// Technique : Linear Search + Hashing

#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N,x, S;
	    cin >> N;
	    int arr[105];
	    for(int i  = 0; i < 101;i++) {
	        arr[i] = -1;
	    }
	    for(int i = 0; i < N; i++) {
	        cin >> x;
	        if(arr[x] == -1)
	            arr[x] = i; 
	    }
	    cin >> S;
	    cout << arr[S] <<endl;
	}
	return 0;
}
