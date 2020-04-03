//Link to the problem: https://codeforces.com/problemset/problem/1/A

#include<iostream>
#include <cmath>

using namespace std;

int main(){
    long long int a,b,c;
    long long int z;
    cin>>a>>b>>c;
    long double x=(double)b/c;
    long double y=(double)(a-c)/c;
    if(y>0){
        z=ceil(x)*(1+ceil(y));
    }
    else{
        z=ceil(x);
    }
    cout<<z;
}
