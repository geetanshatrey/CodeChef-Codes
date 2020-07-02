// Link to the problem : https://www.codechef.com/JUNE20B/problems/EOEO

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    long int T;
    cin>>T;
    while(T) {
        long long int ans = 0;
        long long int TS;
        cin>>TS;
        if(TS % 2 == 0) {
            long long int m = TS, count = 0;
            while(true) {
                if(m % 2 == 0) {
                    m = m / 2;
                    count ++;
                }
                else {
                    break;
                }
            }
            long long int x = pow(2, count + 1);  // 18 / 4 = 4
            ans = TS / x;
        }
        else {
            ans = TS / 2;
        }
        cout<<ans<<endl;
        T--;
    }
}
