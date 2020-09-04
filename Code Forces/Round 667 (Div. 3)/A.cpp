// Link to the problem : https://codeforces.com/contest/1409/problem/A
// Problem Name : Yet Another Two Integers Problem
// Solution Method : Implementation

#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long int a, b;
        cin >> a >> b;
        float c = abs(a-b);
        long int x = c/10;
        if(x < c/10) {
            cout<< x + 1 <<endl;
        }
        else {
            cout << x << endl;
        }
    }
}
