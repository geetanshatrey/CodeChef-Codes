#include<iostream>
#include<vector>

using namespace std;

int fibonacciNo(int N) {
    if(N == 0) {
        return 0;
    }
    int arr[N];
    int i;
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i <= N; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[N];
}

int main() {
    int N, i;
    cin >> N;
    cout<<fibonacciNo(N)<<endl;
    return 0;
}
