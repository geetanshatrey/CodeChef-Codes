//Link to the problem: https://www.hackerrank.com/challenges/vector-sort/problem
// Time Complexity ; O(NlogN)

#include<bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> s;
    int n;
    vector<int> :: iterator it; 
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        s.push_back(input);
    }
    sort(s.begin(),s.end());
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
