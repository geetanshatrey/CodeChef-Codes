//Link to the problem: https://www.hackerrank.com/challenges/vector-erase/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,X,Y,Z;
    cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>X;
    v.erase(v.begin()+X-1);
    cin>>Y>>Z;
    v.erase(v.begin()+Y-1,v.begin()+Z-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
