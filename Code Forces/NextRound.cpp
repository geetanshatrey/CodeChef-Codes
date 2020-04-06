//Link to problem: https://codeforces.com/problemset/problem/158/A

#include<iostream>
using namespace std;

int main () {
    int N,K,c=0;
    cin >> N >> K;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        if(arr[i]>0){
            if(arr[i]>=arr[K-1]){
                c++;
            }
            else{
                break;
            }
        }
        else{
            break;
        }
    }
    cout<<c<<endl;
}
