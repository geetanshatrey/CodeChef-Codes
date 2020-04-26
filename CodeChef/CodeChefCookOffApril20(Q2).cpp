//Link to the problem: https://www.codechef.com/COOK117B/problems/MATBREAK

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        long long int N,A,sum=0,i=0,j,prod=1,c,ver=1,k,m=1,z,temp;
        cin>>N>>A;
        j=N-2;
        long long int arr[N][N];
        while(j!=0){
            if(i==0){
                arr[0][N-1]=A;
                prod=A*A;
                sum=A;
            }
            else{
                c=0;
                arr[N-2-i][j]=prod;
                c++;
                for(k=1;k<=ver;k++){
                    arr[k][j]=prod;
                    c++;
                }
                ver++;
                j--;
                if(m==1){
                    arr[m][N-1]=prod;
                    m=3;
                    c++;
                }
                else{
                    for(z=1;z<=m;z++){
                        arr[i][N-z]=prod;
                        c++;
                    }
                    m++;   
                }
                temp=pow(prod,c);
                sum=sum+temp;
                prod=pow(prod,c+1);
            } 
            i++;  
        }
        if(N==2){
                long long int x=(A*A*A*A*A*A + A);
                long long int y=pow(10,9);
                long long int z=(x % (y+7));
                std::cout<<z<<endl;
        }
        else{
            for(i=0;i<N;i++){
            arr[i][0]=prod;
            }
            for(i=1;i<N;i++){
            arr[N-1][i]=prod;
            }
            sum = sum + pow(prod,(2*N-1));
            long long int x=pow(10,9);
            long long int y=(sum % (x+7));
            std::cout<<y<<endl;
        }
        
        T--;
    }
}
