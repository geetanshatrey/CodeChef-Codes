// Link to the problem : https://practice.geeksforgeeks.org/problems/binary-array-sorting/0
// Problem Name : Binary Array Sorting
// Time Complexity : O(N)
// Technique : Two Pointer


#include<iostream>
#include<vector>
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
	    int p, q;
        p = 0;
        q = 1;
        while(q < arr.size()) {
            if(arr[p] == 1 && arr[q] == 0) {
                int temp = arr[p];
                arr[p] = arr[q];
                arr[q] = temp;
                p = p + 1;
                q = q + 1;
            }
            else if(arr[p] == 0 && arr[q] == 0) {
                p++;
                q++;
            }
            else if(arr[p] == 0 && arr[q] == 1) {
                p = q;
                q = p + 1;
            }
            else {
                q = q + 1;
            }
        }
        for(int i = 0; i < N; i++) {
	        cout << arr[i] << " ";
	    }
	    cout<<endl;
    }
	return 0;
}
