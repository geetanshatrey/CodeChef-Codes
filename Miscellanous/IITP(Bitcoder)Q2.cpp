#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
        long long int N,K;
        cin>>N>>K;
        string S,T;
        cin>>S>>T;
        if(S.length()!=N){
            for(int i=S.length();i<N;i++){
                S=S+"";
            }
        }
        if(T.length()!=N){
            for(int i=T.length();i<N;i++){
                T=T+"";
            }
        }
        long long int changes[K][K],cost=0;
        for(int i=0;i<K;i++){
            for(long long int j=0;j<K;j++){
                cin>>changes[i][j];
            }
        }
            for(long long int i=0;i<N;i++){
                char x = S.at(i);
                char y=  T.at(i);
                if(x!=y){
                    long long int fir=x-97;
                    long long int sec=y-97;
                    int minVal=changes[fir][0]+changes[sec][0];
                    for(long long int j=0;j<K;j++){
                        if(changes[fir][j]+changes[sec][j]<minVal){
                            minVal=changes[fir][j]+changes[sec][j];
                        }
                    }
                    cost=cost+minVal;
                }
            }
            cout<<cost;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        return 0;
}