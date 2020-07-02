// Link to the problem : https://www.codechef.com/JUNE20B/problems/CHFICRM

#include<iostream>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T) {
        int N;
        cin>>N;
        int arr[N], f = 0;
        int fives = 0, tens = 0, fifteens = 0;
        for(int i = 0; i < N; i++) {
            cin>>arr[i];
        }
        for(int i = 0; i < N; i++) {
            if(arr[i] == 5) {
                fives ++;
                continue;
            }
            else if(arr[i] == 10) {
                if(fives > 0 ) {
                    fives--;
                    tens++;
                    continue;
                }
                else {
                    f = 1;
                    break;
                }
            }
            else if(arr[i] == 15) {
                if(tens > 0) {
                    tens--;
                    fifteens++;
                    continue;
                }
                else if(fives >= 2) {
                    fives = fives - 2;
                    fifteens++;
                    continue;
                }
                else {
                    f = 1;
                    break;
                } 
            }
        }
        if(f == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        T--;
    }
}
