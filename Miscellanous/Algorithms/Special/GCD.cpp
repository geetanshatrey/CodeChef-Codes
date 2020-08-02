// GCD of (p,q) is same as GCD of (p',q) or (p,q'), where p' is p % q.

#include<iostream>

using namespace std;

long long findGCD(long long p, long long q) {
    if (p % q == 0) {
        return q;
    }
    long long r = p % q;
    return findGCD(q, r);
}

int main() {
    long long P, Q;
    cin >> P >> Q;
    cout << findGCD(P, Q) << endl;
}
