//Link to the problem: https://www.codechef.com/COOK117B/problems/LIFTME

#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        long int N,Q,init=0,f,d,tot=0;
        cin>>N>>Q;
        for(long int i=0;i<Q;i++){
            cin>>f>>d;
            if(i==0){
                tot=f+abs(d-f);
                init=d;
            }
            else{
                tot=tot+abs(init-f)+abs(d-f);
                init=d;
            }
        }
        cout<<tot<<endl;
        T--;
    }
}
