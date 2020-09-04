// Link to the problem : https://codeforces.com/contest/1409/problem/B
// Problem Name : Minimum Product
// Solution Method : Implementation and Maths

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while(T--) {
        long long int a,b,x,y,n,i;
        vector<long long int> vals(4);
        vals.clear();
        cin >> a >> b >> x >> y >> n;
        if(a - x >= n) {
            long long int t = (a - n)*b;
            vals.push_back(t);
        }
        if(b - y >= n) {
            long long int t = a*(b - n);
            vals.push_back(t);
        }
        if(a - x < n) {
            long long int w = a - x;
            long long int v = n - w;
            w = a - w; 
            long long int z;
            if(v > b - y) {
                z = y;
            }
            else {
                z = b - v;
            }
            long long int t = w*z;
            vals.push_back(t);
        }
        if(b - y < n) {
            long long int w = b - y;
            long long int v = n - w;
            w = b - w;
            long long int z;
            if(v > a - x) {
                z = x;
            }
            else {
                z = a - v;
            }
            long long int t = w*z;
            vals.push_back(t);
        }
        sort(vals.begin(), vals.end());
        cout << vals[0] << endl;
    }
}
