//Link to the problem: https://codeforces.com/problemset/problem/282/A

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int N;
    vector<string> arr;
    int x=0;
    cin>>N;
    for(int i=0;i<N;i++){
        string a;
        cin>>a;
        arr.push_back(a);
        size_t found;
        found= arr[i].find('+');
        if(found!=std::string::npos){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
}
