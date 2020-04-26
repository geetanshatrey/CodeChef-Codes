//Link to the problem: https://www.codechef.com/LTIME83B/problems/SHUFFLE

#include<iostream>
#include<vector>
using namespace std;

bool shuffle(int arr[], int n, int k){
      for(int a=0; a < n*n; a++){
        bool isif = false;
        for(int i = 0; i < n-k; i++){
          if(arr[i+k] < arr[i]){
            isif = true;
            int temp = arr[i+k];
            arr[i+k] = arr[i];
            arr[i]  = temp;
          }
        }
        if(!isif){
          break;
        }
      }
      for (int i = 1; i < n; i++)
      {
        if(arr[i] < arr[i-1]){
          return false;
        }
      }
      return true;
}

int main(){
    int T;
    cin>>T;
    while(T){
        int N,K,c=0,f=0;
        cin>>N>>K;
        int  arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        bool x=shuffle(arr,N,K);
        if(x==true){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        T--;
    }
}
