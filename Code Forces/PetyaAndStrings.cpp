//Link to the problem: https://codeforces.com/problemset/problem/112/A

#include<iostream>
#include<string>

using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower); 
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a.compare(b)>0)
        cout<<"1"<<endl;
    else if(a.compare(b)<0)
        cout<<"-1"<<endl;
    else
        cout<<"0"<<endl;
}
