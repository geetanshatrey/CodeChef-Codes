// Link to the problem : https://www.codechef.com/JUNE20B/problems/EVENM

#include<iostream>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T) {
        int N;
        cin>>N;
        int last = 1, i, j;
        for(i = 0; i < N ;i++) {
            if(i % 2 == 0) {
                for(j = 0; j < N; j++) {
                    cout<<last<<" ";
                    last = last + 1;
                }
                cout<<endl;
            }
            else {
                for(j = N - 1; j >= 0; j--) {
                    cout<<last + j<<" ";
                }
                last = last + N;
                cout<<endl;
            }
        }
        T--;
    }
}
