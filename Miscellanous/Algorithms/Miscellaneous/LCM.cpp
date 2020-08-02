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
    cout << (P * Q) / findGCD(P, Q) << endl;
}