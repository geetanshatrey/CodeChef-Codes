//Link to the problem : https://www.codechef.com/COOK118B/problems/CHEFRECP

#include<iostream>
#include<vector>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T) {
        int N;
        cin>>N;
        int vals[1000]={0};
        vector<int> arr,temp;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            arr.push_back(x);
            temp.push_back(x);
        }
        vector<int>::iterator ip;
        int f=0;
        ip = std::unique(temp.begin(), temp.end());
        temp.resize(std::distance(temp.begin(), ip));
        for (ip = temp.begin(); ip != temp.end(); ++ip) { 
            int y = count(arr.begin(),arr.end(),*ip);
            if(vals[y-1]==0) {
                vals[y-1] = 1;
            }
            else {
                f=1;
                break;
            }
        }
        if(f==0) {
            cout<<"YES"<<endl;
        } 
        else {
            cout<<"NO"<<endl;
        }
        T--;
    }
}
