//Link to the problem: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d83bf
//Name: Bus Tours

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int T,F;
    cin>>T;
    F=T;
    while(T>0){
        long long int N,D,i;
        cin>>N>>D;
        long long int X[N];
        for(i=0;i<N;i++){
            cin>>X[i];
        }
        for(i=N-1;i>=0;i--){
            long long int x=D%X[i];
            if(x!=0){
                D=D-x;
            }
        }
        cout<<"Case #"<<F-T+1<<": "<<D<<endl;
        T--;
    }
}
