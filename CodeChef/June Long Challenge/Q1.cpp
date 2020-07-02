// Link to the problem : https://www.codechef.com/JUNE20B/problems/PRICECON

#include<iostream>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T) {
        int N, K;
        cin>>N>>K;
        int x, y = 0 ;
        for(int i = 0; i < N; i++) {
            cin>>x;
            if(x > K) {
                y = y + x - K;
            }
        }
        cout<<y<<endl;
        T--;
    }
}
