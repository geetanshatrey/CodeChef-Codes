// Link to the problem : https://www.codechef.com/PSTR2020/problems/ANITGUY5
// Problem Name : Transition Start

#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int zeroes = 0;
        for(int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if(x== 0) {
                zeroes++;
            }
        }
        cout << zeroes << endl;
    }
}
