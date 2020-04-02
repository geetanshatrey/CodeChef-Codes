#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ld long double
#define TAB << "\t" << 
#define vll vector<ll> 
#define vi vector<int> 
#define pi pair<int,int> 
#define vs vector<string> 
#define vp  vector < pair<int, int> > 
#define pb push_back
#define all(n) n.begin(),n.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
#define MAXSIZE 26


int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    freopen("a_example.txt","r",stdin);
    ofstream x("Sub.txt",ios::out);
    long long b,l,d,scanned=0;
    vi score;
    int n,i,j;
    cin>>b>>l>>d;
    for(i=0;i<b;i++){
            cin>>n;
            score.push_back(n);
        }
    int sum[l];
    int max=0;
    long lib[l][3];
    int book_det[l][b];
    memset(sum,l,0);
    for(int i=0;i<l;i++)
    {
        
        for(j=0;j<3;j++)
        {
            cin>>lib[i][j];
        }
        for(j=0;j<lib[i][0];j++)
            {
                cin>>n;
                book_det[i][j]=n;
            }
        if(lib[i][2]<d)
            {
                for(int k=0;k<lib[i][0];k++)
                {
                    sum[i]+=score[book_det[i][k]];
                }
                scanned++;
            }
        } 
        x<<scanned<<endl;
        x<<max<<" "<<lib[max][0]<<endl;
        for(int k=0;k<lib[max][0];k++)
        {
            x<<book_det[max][k]<<" ";
        }
        x<<endl;
        int c=0;
        if(d-lib[max][2]>lib[max+1][2])
        {
            for(int k=0;k<lib[max+1][0];k++)
            {
                int f=0;
                for(int m=0;m<lib[max][0];m++)
                {
                    if(book_det[max+1][k]==book_det[max][m])
                        c++;
                }
            
            }
            x<<max+1<<" "<<lib[max+1][0]-c<<endl;
            for(int k=0;k<lib[max+1][0];k++)
            {
                int f=0;
                for(int m=0;m<lib[max][0];m++)
                {
                    if(book_det[max+1][k]==book_det[max][m])
                        f=1;
                        
                }
                if(f==0)
                    x<<book_det[max+1][k]<<" ";
                
            }
        }
        #ifdef INPUT
        
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif
    x.close();
    return 0;
    }   

