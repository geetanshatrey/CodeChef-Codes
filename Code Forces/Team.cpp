//Link to the problem: https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main(){
    int N,c=0,res=0;
    cin>>N;
    int arr[N][3];
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<N;i++){
        c=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                c++;
            }
        }
        if(c>=2){
            res++;
        }
    }
    cout<<res;
}
