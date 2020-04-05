//Problem Name: Nesting Depth

#include<iostream>
#include<string>
using namespace std;

int main(){
    int T,F;
    cin>>T;
    F=T;
    while(T){
        cout<<"Case #"<<F-T+1<<": ";
        string a;
        char b;
        int caseOpen=0;
        cin>>a;
        for(int i=0;i<a.length();i++){
            b=a[i];
            switch(b){
                case '0':
                            if(caseOpen>0){
                                for(int i=0;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=0;
                            }
                            cout<<"0";
                            break;
                case '1':
                            if(caseOpen>1){
                                for(int i=1;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=1;
                            }
                            else if(caseOpen<1){
                                cout<<"(";
                                caseOpen++;
                            }
                            cout<<"1";
                            break;

                case '2':
                            if(caseOpen>2){
                                for(int i=2;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=2;
                            }
                            else if(caseOpen<2){
                                for(int i=caseOpen;i<2;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"2";
                            break;

                case '3':
                            if(caseOpen>3){
                                for(int i=3;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=3;
                            }
                            else if(caseOpen<3){
                                for(int i=caseOpen;i<3;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"3";
                            break;
                case '4':
                            if(caseOpen>4){
                                for(int i=4;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=4;
                            }
                            else if(caseOpen<4){
                                for(int i=caseOpen;i<4;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"4";
                            break;
                case '5':
                            if(caseOpen>5){
                                for(int i=5;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=5;
                            }
                            else if(caseOpen<5){
                                for(int i=caseOpen;i<5;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"5";
                            break;
                case '6':
                            if(caseOpen>6){
                                for(int i=6;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=6;
                            }
                            else if(caseOpen<6){
                                for(int i=caseOpen;i<6;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"6";
                            break;
                case '7':
                            if(caseOpen>7){
                                for(int i=7;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=7;
                            }
                            else if(caseOpen<7){
                                for(int i=caseOpen;i<7;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"7";
                            break;
                case '8':
                            if(caseOpen>8){
                                for(int i=8;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=8;
                            }
                            else if(caseOpen<8){
                                for(int i=caseOpen;i<8;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"8";
                            break;
                case '9':
                            if(caseOpen>9){
                                for(int i=9;i<caseOpen;i++){
                                    cout<<")";
                                }
                                caseOpen=9;
                            }
                            else if(caseOpen<9){
                                for(int i=caseOpen;i<9;i++){
                                    cout<<"(";
                                    caseOpen++;
                                }
                            }
                            cout<<"9";
                            break;
            }
        }
        if(caseOpen!=0){
            for(int i=0;i<caseOpen;i++){
                cout<<")";
            }
        }
        cout<<endl;
        T--;
    }
}
