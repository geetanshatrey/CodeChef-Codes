// Link to the problem : https://www.codechef.com/problems/ITGUY57
// Problem Name : Find Start

#include<iostream>

using namespace std;

int main() {
    long long int T;
    cin >> T;
    while(T--) {
        long long int N;
        cin >> N;
        long long int f = 0;
        long long int l = 1;
        long long int t = 1;
        for(long long int i = 0; i < N; i++) {
            for(long long int j = 0; j < t; j++) {
                cout << f << " ";
                long long int temp = l;
                l = l + f;
                f = temp;
            }
            cout << endl;
            t++;
        }
    }
}
