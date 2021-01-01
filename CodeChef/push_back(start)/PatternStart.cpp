// Link to the problem : https://www.codechef.com/PSTR2020/problems/ITGUY05
// Problem Name : Pattern Start

#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        if(N > 3) {
            int c = 1;
            int t = 1;
            int f = 1;
            for(int i = 0; i < N; i++) {
                if(i >=2 && i != N - 1) {
                    cout << t;
                    t++;
                    for(int k = 0; k < f; k++) {
                        cout << " ";
                    }
                    f++;
                    cout << t;
                    t++;
                }
                else {
                    for(int j = 0; j < c; j++) {
                        cout << t;
                        t++;
                    }
                }
                
                c++;
                cout << endl;
            }
        }
        else {
            int c = 1;
            int t = 1;
            for(int i = 0; i < N; i++) {
                for(int j = 0; j < c; j++) {
                    cout << t;
                    t++;
                }
                c++;
                cout << endl;
            }
        }
        
    }
}
