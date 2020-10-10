// Link to the problem : https://practice.geeksforgeeks.org/problems/missing-number-in-array/0/
// Problem Name : Missing number in array 
// Time Complexity : O(N)
// Technique : Searching + Hash Table

#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    cin >> N;
	    int x;
	    int hashTable[N+1] = {0};
	    for(int i = 0; i < N-1; i++) {
	        cin >>x;
	        hashTable[x]++;
	    }
	    for(int i = 1; i <= N; i++) {
	        if(hashTable[i] == 0) {
	            cout << i <<endl;
	            break;
	        }
	    }
	}
	return 0;
}
