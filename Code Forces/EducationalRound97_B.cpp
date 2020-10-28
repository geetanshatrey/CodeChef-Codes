#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, count1 = 0, count0 = 0;
        cin >> N;
        string s;
        cin >> s;
        for(int i = 0; i < N - 1; i++) {
            if(s[i] == '0') {
                if(s[i + 1] == '0') {
                    count0++;
                }
            }
            else {
                if(s[i + 1] == '1') {
                    count1++;
                }
            }
        }
        cout << max(count0, count1) << endl;
    }
}