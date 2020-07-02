// Link to the problem : https://www.codechef.com/JUNE20B/problems/XYSTR

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T) {
        string a;
        cin>>a;
        int count = 0, curr = -1;
        for(int i = 0; i < a.length() - 1; i++) {
            if ( (a[i] == 'y' && curr == 0) || (a[i] == 'x' && curr == 1) || ((a[i] == 'x' && a[i+1] == 'y') ||(a[i] == 'y' && a[i+1] =='x' )) ) {
                count ++;
                curr = -1;
                i++;
                continue;
            }
            else {
                if(a[i] == 'x') {
                    curr = 0;
                }
                else {
                    curr = 1;
                }
            } 
        }
        cout<<count<<endl;
        T--;
    }
}
