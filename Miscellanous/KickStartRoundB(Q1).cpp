//Link to the problem: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d82e6
//Name: Bike Tour

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,F;
    cin>>T;
    F=T;
    while(T>0){
        int N,count=0;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int i=1;i<N-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                count++;
            }
        }
        cout<<"Case #"<<F-T+1<<": "<<count<<endl;
        T--;
    }
}
