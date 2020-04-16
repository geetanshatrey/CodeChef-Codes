//Link to the problem: https://codeforces.com/problemset/problem/50/A

#include<iostream>
using namespace std;

int main(){
    int M,N;
    cin>>M>>N;
    if(M%2==0)
        cout<<(M/2)*N;
    else{
        cout<<(M)*N/2;
    }
}
