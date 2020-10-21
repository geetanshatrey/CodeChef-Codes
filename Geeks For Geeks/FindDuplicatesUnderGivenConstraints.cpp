// Link to the problem : https://practice.geeksforgeeks.org/problems/find-duplicates-under-given-constraints/0/
// Problem Name : Find duplicates under given constraints
// Time Complexity : O(N)
// Technique : Array Traversal + 1 comparison

#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int arr[10];
	    for(int i = 0; i < 10; i++) {
	        cin >> arr[i];
	    }
	    if(arr[5] == arr[6]) {
	        cout << arr[5] << endl;
	    }
	    else {
	        cout << arr[4] << endl;
	    }
	}
	return 0;
}