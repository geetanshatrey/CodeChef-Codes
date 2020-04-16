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
