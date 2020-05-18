//Link to the problem: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff43/00000000003380d2

#include<iostream>
#include<vector>

using namespace std;

int main() {
    int T,F;
    cin>>T;
    F=T;
    while(T) {
        int N,K;
        cin>>N>>K;
        vector <int> arr,indexes;
        int len=0;
        for(int i=0;i<N;i++) {
            int x;
            cin>>x;
            arr.push_back(x);
            if(x==K) {
                indexes.push_back(i);
                len++;
            }
        }
        int count=0;
        for(int i=0;i<len;i++){
            int f=0,j=K-1,m;
            for(m=indexes[i]+1;m<N && j>0 ;m++){
                if(arr[m]==j){
                    j--;
                }
                else{
                    f=1;
                    break;
                }
            }
            if(f==0 && j==0){
                
                count++;
            }
        }
        cout<<"Case #"<<F-T+1<<": "<<count<<endl;
        T--;
    }
}
