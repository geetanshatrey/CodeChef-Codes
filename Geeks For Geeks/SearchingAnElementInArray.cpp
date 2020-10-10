// Link to the problem : https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array/0
// Problem Name : Searching an element in a sorted array
// Time Complexity : O(N)
// Technique : Searching

#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N, K, f = 0;
	    cin >> N >> K;
	    int arr[N];
	    for(int i = 0; i < N; i++) {
	        cin >> arr[i];
	        if(f == 0) {
	            if(arr[i] > K) {
	                f = -1;
	            }
	            else if(arr[i] == K) {
	                f = 1;
	            }
	        }
	    }
	    if(f == 1)
	        cout << "1" <<endl;
	    else
	        cout << "-1" <<endl;
	}
	return 0;
}
