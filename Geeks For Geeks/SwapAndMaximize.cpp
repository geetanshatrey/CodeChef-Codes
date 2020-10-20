// Link to the problem : https://practice.geeksforgeeks.org/problems/swap-and-maximize/0/
// Problem Name : Swap and Maximize
// Time Complexity : O(N * log N)
// Technique : Sorting + Greedy Approach

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    cin >> N;
	    vector<long long int> arr;
	    for(int i = 0; i < N; i++) {
	        long long int x;
	        cin >> x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(), arr.end());
	    long int sum = 0;
	    for(int i = 0; i < N/2; i++) {
	        sum -= 2 * arr[i];
	        sum += 2 * arr[N - 1 - i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
