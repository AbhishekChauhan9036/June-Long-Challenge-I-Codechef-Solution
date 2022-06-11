#include<bits/stdc++.h>
using namespace std;
#define RR return 0;
int32_t main(){
    int EkdamDoglehoka=1,________________=0;
    cin>>EkdamDoglehoka;

    while(EkdamDoglehoka--){
        int _,__;
        cin>>_>>__;

        if(_<=6){
            cout<<__<<endl;
        }else{
            ________________=_/6;
            if(_%6==0){
                cout<<________________*__<<endl;
            }else{
                cout<<________________*__+__<<endl;
            }
        }
    }
    RR
}