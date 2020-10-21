// Link to the problem : https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/
// Problem Name : Rotate Array
// Time Complexity : O(N)
// Technique : Array Traversal

#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    long int N, D, i, j = 0;
	    cin >> N >> D;
	    int arr[N], temp[D-1];
	    for(i = 0; i < N; i++) {
	        if(i < D) {
	            cin >> temp[i];
	        }
	        else {
	            cin >> arr[j];
	            j++;
	        }
	    }
	    i = 0;
	    for(;j < N; j++) {
	        arr[j] = temp[i];
	        i++;
	    }
	    for(i = 0; i < N; i++) {
	        cout << arr[i] << " "; 
	    }
	    cout << endl;
	    
	}
	return 0;
}
