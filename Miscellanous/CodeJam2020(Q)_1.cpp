// Problem Name: Vestigium.

#include<iostream>
using namespace std;

int main(){
    int N,T,r,c,F;
    cin>>T;
    F=T;
    while(T){
        cin>>N;
        r=0;
        c=0;
        int arr[N][N],test[N],sum=0;
        for(int i=0;i<N;i++){
            test[i]=0;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                test[arr[i][j]-1]=test[arr[i][j]-1]+1;
                cout<<"Test:"<<test[arr[i][j]-1]<<endl;
                if(test[arr[i][j]-1]>1){
                    r=r+1;
                    cout<<i<<" "<<j;
                    break;
                }
            }
            for(int k=0;k<N;k++){
                test[k]=0;
            }
        }
        for(int j=0;j<N;j++){
            for(int i=0;i<N;i++){
                test[arr[i][j]-1]=test[arr[i][j]-1]+1;
                cout<<"Test:"<<test[arr[i][j]-1]<<endl;
                if(test[arr[i][j]-1]>1){
                    c=c+1;
                    cout<<i<<" "<<j;
                    break;
                }
            }
            for(int k=0;k<N;k++){
                test[k]=0;
            }
        }
        for(int i=0;i<N;i++){
            sum=sum+arr[i][i];
        }
        cout<<"Case #"<<F-T+1<<": "<<sum<<" "<<r<<" "<<c<<endl;
        T--;
    }
}
