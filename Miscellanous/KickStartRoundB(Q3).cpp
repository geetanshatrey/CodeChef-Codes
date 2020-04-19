//Link to the problem: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d83dc
//Name: Robot Path Decoding

#include<bits/stdc++.h>

using namespace std;
int main(){
    long int T,F;
    cin>>T;
    F=T;
    while(T>0){
        long int N,curRow=1,curCol=1;
        long int f=1,i,j;
        stack <long int> s;
        string arr;
        cin>>arr;
        s.push(1);
        N=arr.length();
        for(i=0;i<N;i++){
            if(arr[i]=='N'){
                for(long int k=0;k<s.top();k++){
                    if(curCol==1){
                        curCol=pow(10,9);
                    }
                    else{
                        curCol--;
                    }
                }
            }
            else if(arr[i]=='S'){
                for(long int k=0;k<s.top();k++){
                    if(curCol==pow(10,9)){
                        curCol=1;
                    }
                    else{
                        curCol++;
                    }
                }
            }
            else if(arr[i]=='E'){
                for(long long int k=0;k<s.top();k++){
                    if(curRow==pow(10,9)){
                        curRow=1;
                    }
                    else{
                        curRow++;
                    }
                }
            }
            else if(arr[i]=='W'){
                for(long int k=0;k<s.top();k++){
                    if(curRow==1){
                        curRow=pow(10,9);
                    }
                    else{
                        curRow--;
                    }
                }
            }
            else if(arr[i]>='0' && arr[i]<='9'){
                int x = (int)arr[i] - 48;
                f=x*f;
                s.push(f);
            }
            else if(arr[i]==')'){
                s.pop();
                f=s.top();
                if(s.empty()==true){
                    f=1;
                    s.push(f);
                }
            }
        }
        cout<<"Case #"<<F-T+1<<": "<<curRow<<" "<<curCol<<endl;
        T--;
    }
}
