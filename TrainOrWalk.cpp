#include<iostream>

using namespace std;

int main()
{
    int N,A,B,C,D,P,Q,T,Y;
    cin>>T;
    while(T>0)
    {
        cin>>N>>A>>B>>C>>D>>P>>Q>>Y;
        int *p=new int[N];
        int pos1,pos2,pos3,pos4,f1=0,f2=0,f3=0,f4=0,tt,wt;
        for(int i=0;i<N;i++)
        {
            cin>>p[i];
        }
        for(int i=0;i<N;i++)
        {
            if(p[i]==A||p[i]==B||p[i]==C||p[i]==D)
            {
                if(p[i]==A)
                {
                    f1=1;
                    pos1=i+1;
                    if(f2==1&&f3==1&&f4==1)
                        break;
                }
                if(p[i]==B)
                {
                    f2=1;
                    pos2=i+1;
                    if(f1==1&&f3==1&&f4==1)
                        break;
                }
                if(p[i]==C)
                {
                    f3=1;
                    pos3=i+1;
                    if(f1==1&&f2==1&&f4==1)
                        break;
                }
                if(p[i]==D)
                {
                    f4=1;
                    pos4=i+1;
                    if(f1==1&&f2==1&&f3==1)
                        break;
                }
            }
        }
        int dif=pos2-pos1;
        int timeAToC;
        if(pos1<pos2)
        {
            wt=dif*P;
            int x= pos3-pos1;
            if(x>0)
            {
                timeAToC=x*P;
            }
            else
            {
                timeAToC=-1*x*P;
            }
            if(timeAToC<=Y)
            {
                if(pos3<pos4)
                {
                    tt=Y+(pos4-pos3)*Q;
                    if(pos2<pos4)
                    {
                        tt=tt+(pos4-pos2)*P;
                    }
                    else
                    {
                        tt=tt+(pos2-pos4)*P;
                    }
                }
                else
                {
                    tt=Y+(pos3-pos4)*Q;
                    if(pos2<pos4)
                    {
                        tt=tt+(pos4-pos2)*P;
                    }
                    else
                    {
                        tt=tt+(pos2-pos4)*P;
                    }
                }
            }
            else
            {
                tt=wt+1;
            }
        }
        else
        {
            wt=-1*dif*P;
            int x= pos3-pos1;
            if(x>0)
            {
                timeAToC=x*P;
            }
            else
            {
                timeAToC=-1*x*P;
            }
            if(timeAToC<=Y)
            {
                if(pos3<pos4)
                {
                    tt=Y+(pos4-pos3)*Q;
                    if(pos2<pos4)
                    {
                        tt=tt+(pos4-pos2)*P;
                    }
                    else
                    {
                        tt=tt+(pos2-pos4)*P;
                    }
                }
                else
                {
                    tt=Y+(pos3-pos4)*Q;
                    if(pos2<pos4)
                    {
                        tt=tt+(pos4-pos2)*P;
                    }
                    else
                    {
                        tt=tt+(pos2-pos4)*P;
                    }
                }
            }
            else
            {
                tt=wt+1;
            }
        }
        if(wt<tt)
            cout<<wt<<endl;
        else
        {
            cout<<tt<<endl;
        }

    T--; 
    }
}
