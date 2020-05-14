//Link to the problem: https://www.codechef.com/MAY20B/problems/COVID19

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        int N;
        cin>>N;
        vector<int> arr;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int best=1,worst=1,j=0;
        bool changed=false;
        for(int i=0;i<N;i++){
            int temp=1;
            if(i==N-1){
                if(arr[i]-arr[i-1]>2){
                    best=1;
                }
                break;
            }
            if(arr[i+1]-arr[i]<=2){
                temp++;
                for(j=i+1;j<N-1;j++){
                    if(arr[j+1]-arr[j]<=2){
                        temp++;
                    }
                    else{
                        break;
                    }
                }
                i=j;
            }
            if(temp>worst){
                worst=temp;
            }
            if(changed==false){
                best=temp;
                changed=true;
            }
            else{
                if(temp<best){
                    best=temp;
                }
            }
        }
        cout<<best<<" "<<worst<<endl;
        T--;
    }
}
