// Link to the problem : https://codeforces.com/contest/1409/problem/C
// Problem Name : Yet Another Array Restoration
// Solution Method : Array Implementation

#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long int n,x,y,c,z,temp,i, d = 1;
        vector<int> arr;
        cin >> n >> x >> y;
        arr.push_back(x);
        arr.push_back(y);
        c = n;
        while(c > 2) {
            float w =  float(y - x) / float(c - 1);
            if(ceil(w)== floor(w)) {
                z = (y - x) / (c - 1);
                for(int i = 1; i < c - 1; i++) {
                    arr.push_back(x + z * i);
                }
                break;
            }
            c--;
        }
        sort(arr.begin(), arr.end());
        z = arr[1] - arr[0];
        c = n - arr.size();
        for(i = 1; i <= c; i++) {
            temp = arr[0] - z * (i);
            if(temp > 0) {
                arr.push_back(temp);
            }
            else {
                temp = y + z * d;
                d++;
                arr.push_back(temp);
            } 
        }
        sort(arr.begin(), arr.end());
        for(i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout<< endl;
    }
}
