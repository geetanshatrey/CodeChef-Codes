#include<iostream>
#include<algorithm>

using namespace std;

int dp[200][405];
vector<int> v;
int N;

int solve(int idx, int t) {
    if(idx == N) {
        return 0;
    }
    if(dp[idx][t] != -1) {
        return dp[idx][t];
    }
    int mn = INT_MAX;
    for(int i = t; i <= max(t, v[idx]); i++) {
        mn = min(mn, abs(v[idx]- i) + solve(idx+1, i+1));
    }
    return dp[idx][t] = mn;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int ans;
        cin >> N;
        v.resize(N);
        for(int i = 0; i < N; i++) {
            cin >> v[i];
        }
        memset(dp, -1, sizeof(dp));
        sort(v.begin(), v.end());
        ans = solve(0, 1);
        cout << ans << endl;
    }
}