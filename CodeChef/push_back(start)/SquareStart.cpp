// Link to the problem : https://www.codechef.com/PSTR2020/problems/ITGUY46/
// Problem Name : Square Start

#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int ans = (N * (N+1) * (2 * N + 1) ) / 6 +  ((N-1) * (N) * (2 * (N-1) + 1) ) / 6;
        cout << ans << endl;
    }
}
