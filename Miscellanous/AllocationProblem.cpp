#include<bits/stdc++.h>
using namespace std;
/*
 There are N houses for sale. The i-th house costs Ai dollars to buy. You have a budget of B dollars to spend.
 What is the maximum number of houses you can buy?
 
 Input:
 The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a single line containing the two integers N and B. The second line contains N integers. The i-th integer is Ai, the cost of the i-th house.
 
 Output:
 For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of houses you can buy.
 
    Limits:
 1)Time limit: 15 seconds per test set.
 2)Memory limit: 1GB.
 
 1 ≤ T ≤ 100.
 1 ≤ B ≤ 105.
 1 ≤ Ai ≤ 1000, for all i.
 Test set 1
 1 ≤ N ≤ 100.
 Test set 2
 1 ≤ N ≤ 105.
 */
int main(){
    int T,count=1;
    cin>>T;
    while(T>0){
        long int N,B;
        cin>>N>>B;
        vector <int> arr;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int sum=0,c=0;
        sort(arr.begin(),arr.end());
        for(int k=0;k<N;k++){
            sum=sum+arr[k];
            if(sum<=B){
                c++;
            }
            else{
                break;
            }
        }
        cout<<"Case #"<<count<<": "<<c<<endl;
        count++;
        T--;
    }
}

