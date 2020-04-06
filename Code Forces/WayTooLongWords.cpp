//Link to the problem: https://codeforces.com/problemset/problem/71/A

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(arr[i].size()>10){
            int z=arr[i].size();
            cout<<arr[i][0]<<(arr[i].size()-2)<<arr[i][z-1]<<endl;
        }
        else{
            cout<<arr[i]<<endl;
        }
    }
}
