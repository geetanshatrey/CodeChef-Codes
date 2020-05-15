//Link to the problem: https://www.codechef.com/MAY20B/problems/CORUS

#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        int N,Q;
        cin>>N>>Q;
        string a;
        cin>>a;
        int total[Q];
        int finalAnswer[Q];
        for(int i=0;i<Q;i++){
            cin>>total[i];
            finalAnswer[i]=0;
        }
        int arr[26]={0};
        for(int i=0;i<N;i++){
            int x=a[i];
            arr[x-97]++;
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<Q;j++){
                if(arr[i]>total[j]){
                   finalAnswer[j]=finalAnswer[j]+arr[i]-total[j];
                }
            }
        }
        for(int i=0;i<Q;i++){
            cout<<finalAnswer[i]<<endl;
        }
        T--;
    }
}
