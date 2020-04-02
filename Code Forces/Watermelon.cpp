//Link to the problem: https://codeforces.com/contest/4/problem/A

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0 && n>0 && n!=2)
        cout<<"YES";
    else
        cout<<"NO";
}
