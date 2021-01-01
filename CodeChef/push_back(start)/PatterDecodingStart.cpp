// Link to the problem : https://www.codechef.com/PSTR2020/problems/ITGUY58
// Problem Name : Patter Decoding Start

#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int c = N;
        int t = 1;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < c; j++) {
                cout << t;
                t++;
            }
            c--;
            cout << endl;
        }
    }
}
