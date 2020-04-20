// Time complexity : O(n^2)

#include<iostream>

using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    int arr[N],r=0,c=0;
    int sum=0,highest;
    for(int i=0;i<N;i++){
        cout<<"Enter the value: ";
        cin>>arr[i];
    }
    highest=arr[0];
    for(int i=0;i<N-1;i++){
        sum=arr[i];
        for(int j=i+1;j<N;j++){
            sum=sum+arr[j];
            if(sum>highest){
                r=i;
                c=j;
                highest=sum;
            }
        }
    }
    cout<<"Highest sum is between "<<arr[r]<<" and "<<arr[c]<<"!"<<endl;
    cout<<"Highest sum: "<<highest<<endl;
}
