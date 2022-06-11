#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define RR return 0;
int32_t main(){
    int EkdamDoglehoka=1,________________=0,____OO=0,____ZZ=0,___print=0;
    cin>>EkdamDoglehoka;

    while(EkdamDoglehoka--){
        cin>>____OO;
        int __ARR[____OO],__BRR[____OO];
        for(int bhosdike=0;bhosdike<____OO;bhosdike++){
            __ARR[bhosdike]=bhosdike+1;
        }

        if(____OO==2){
            cout<<"2 1"<<endl;
        }else if(____OO==3){
            cout<<"2 3 1"<<endl;
        }else{

            for(int bhosdike=0;bhosdike<____OO;bhosdike++){
                 __BRR[____OO-2*bhosdike-1]=__ARR[____OO-bhosdike-1];
                 __BRR[____OO-2*bhosdike-2]=__ARR[bhosdike];
            }

            for(int ekdamChutiyehoka=0;ekdamChutiyehoka<____OO;ekdamChutiyehoka++){
                cout<<__BRR[ekdamChutiyehoka]<<" ";
                cout<<endl;
            }
            
        }
    }
    RR
}