//Link to the problem: https://www.codechef.com/LTIME83B/problems/FFL
// Time Complexity : O(N^2)

#include<iostream>


using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        int N,S;
        cin>>N>>S;
        int arr[N];
        int indexes[N];
        string isPossible="no";
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int i=0;i<N;i++){
            cin>>indexes[i];
        }
        int priceLeft=100-S;
        for(int i=0;i<N-1;i++){
            if(arr[i]<=priceLeft-1){
                if(indexes[i]==0){
                    for(int k=i+1;k<N;k++){
                        if(indexes[k]==1){
                            if(arr[i]+arr[k]<=priceLeft){
                                isPossible="yes";
                            }
                        }
                    }
                    if(isPossible=="yes")
                        break;
                }
                else{
                    for(int k=i+1;k<N;k++){
                        if(indexes[k]==0){
                            if(arr[i]+arr[k]<=priceLeft){
                                isPossible="yes";
                            }
                        }
                    }
                    if(isPossible=="yes")
                        break;
                }
            }
        }
        cout<<isPossible<<endl;
        T--;
    }
}
