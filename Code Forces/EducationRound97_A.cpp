#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long int L, R;
        cin >> L >> R;
        if(R < 2 * L) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
}