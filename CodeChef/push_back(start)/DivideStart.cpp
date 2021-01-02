// Link to the problem : https://www.codechef.com/problems/ITGUY06
// Problem Name : Divide Start

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
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        int x = s[i] - '0';
        if(x % 5 == 0) {
            cout << "1 \n";
            return;
        }
    }
    cout << "0 \n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;

    while(T--) {
        solve();
    }
}