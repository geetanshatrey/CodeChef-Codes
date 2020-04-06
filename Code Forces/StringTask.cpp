//Link to the problem: https://codeforces.com/problemset/problem/118/A

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++){
        if(!(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||arr[i]=='Y'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y')){
            if(arr[i]>=97)
                cout<<"."<<arr[i];
            else{
                char a;
                a=arr[i]+32;
                cout<<"."<<a;
            }
        }
    }
    cout<<endl;
}
