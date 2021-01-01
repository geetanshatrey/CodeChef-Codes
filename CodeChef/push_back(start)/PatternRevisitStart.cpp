// Link to the problem : https://www.codechef.com/PSTR2020/problems/ITGUY45
// Problem Name : Pattern Revisit Start

#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        for(int i = 0; i < N; i++) {
            if(i <= N/2) {
                for(int j = 0; j < i; j++) {
                    cout <<" ";
                }
                cout << "*" << endl;
            }
            else {
                for(int j = 0; j < N - i - 1; j++) {
                    cout <<" ";
                }
                cout << "*" << endl;
            }
        }
    }
}
