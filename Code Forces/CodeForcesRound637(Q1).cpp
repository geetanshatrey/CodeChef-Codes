//Link to the problem: https://codeforces.com/contest/1341/problem/A

#include<iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int grainMin,grainMax,totalMin,totalMax;
        grainMin=n*(a-b);
        grainMax=n*(a+b);
        totalMin=c-d;
        totalMax=c+d;
        if(grainMin>=totalMin && grainMin<=totalMax){
            cout<<"Yes"<<endl;
        }
        else if(grainMax>=totalMin && grainMax<=totalMax){
            cout<<"Yes"<<endl;
        }
        else{
            if(grainMin<totalMin & grainMax>totalMax){
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
        T--;
    }
}
