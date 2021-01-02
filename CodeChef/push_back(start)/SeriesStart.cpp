// Link to the problem : https://www.codechef.com/PSTR2020/problems/ITGUY07
// Problem Name : Series Start

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

void solve() {
    long long int N;
    cin >> N;
    long long int ans = (N * (N - 1)) / 2;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int T;
    cin >> T;

    while(T--) {
        solve();
    }
}
