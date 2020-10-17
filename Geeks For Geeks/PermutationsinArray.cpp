// Link to the problem : https://practice.geeksforgeeks.org/problems/permutations-in-array/0/
// Problem Name : Permutations in array
// Time Complexity : O(N * log N)
// Technique : Sorting

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    long long int K;
	    cin >> N >> K;
	    vector<long long int> a, b , ascA, ascB, dscA, dscB;
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        a.push_back(x);
	    }
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        b.push_back(x);
	    }
	    ascA = a;
	    ascB = b;
	    dscA = a;
	    dscB = b;
	    sort(ascA.begin(), ascA.end());
	    sort(ascB.begin(), ascB.end());
	    sort(dscA.begin(), dscA.end(), greater<long long int>());
	    sort(dscB.begin(), dscB.end(), greater<long long int>());
	    
	    int f = 0;
	    for(int i = 0; i < N; i++) {
	        if(ascA[i] + dscB[i] < K) {
	            f = 1;
	            break;
	        }
	    }
	    if(f == 0) {
	        cout << "1" << endl;
	    }
	    else {
	        f = 0;
    	    for(int i = 0; i < N; i++) {
    	        if(ascB[i] + dscA[i] < K) {
    	            f = 1;
    	            break;
    	        }
    	    }
    	    if(f == 0) {
	            cout << "1" << endl;
	        }
	        else {
	            cout << "0" << endl;
	        }
	    }
	}
	return 0;
}
