// Link to the problem : https://www.codechef.com/PSTR2020/problems/ITGUY09
// Problem Name : Basket Start

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        int table[10000001] = {0};
        for(int i = 0; i < N; i++) {
            int x;
            cin >> x;
            table[x]++;
        }
        vector<int> res;
        for(int i = 0; i < M; i++) {
            int x;
            cin >> x;
            if(table[x] > 0) {
                res.push_back(x);
            }
        }
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
