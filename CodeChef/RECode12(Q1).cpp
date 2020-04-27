//Link to the problem: https://www.codechef.com/RC122020/problems/RECNDNOS

#include<iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        int N;
        cin>>N;
        int arr[N];
        int noOfTypes=0,types[N],f=0;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(i==0){
                types[noOfTypes]=arr[i];
                noOfTypes++;
            }
            else{
                f=0;
                for(int j=0;j<noOfTypes;j++){
                    if(arr[i]==types[j]){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    types[noOfTypes]=arr[i];
                    noOfTypes++;
                }
            }
        }
        int maxDishes=0,totalMax=0,typeOfMax=0;
        for(int i=0;i<noOfTypes;i++){
            maxDishes=0;
            for(int j=0;j<N;j++){
                if(arr[j]==types[i]){
                    maxDishes++;
                    if(arr[j+1]==types[i] && j+1<N){
                        j++;
                    }
                }
            }
            if(maxDishes>=totalMax){
                if(maxDishes==totalMax){
                    if(types[i]<typeOfMax){
                        typeOfMax=types[i];
                        totalMax=maxDishes;
                    }
                }
                else{
                    typeOfMax=types[i];
                    totalMax=maxDishes;
                }
                
            }
        }
        cout<<typeOfMax<<endl;
        T--;
    }
}
