#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define RR return 0;
int32_t main(){
    int EkdamDoglehoka=1,________________=0,____OO=0,____ZZ=0,___print=0;
    cin>>EkdamDoglehoka;

    while(EkdamDoglehoka--){
        cin>>________________;
        string _,__,____=" ";
        cin>>_>>__;

        for(int harami=0;harami<________________;harami++){
            if(_[harami]==__[harami]){
                ____OO++;
            }else{
                ____ZZ++;
                ____+=__[harami];
            }
        }
        ___print=0;
        sort(____.begin(),____.end());
        for(int harami=0;harami<____.size()-1;harami++){
            if(____[harami]!=____[harami+1]){
                ___print++;
            }
        }
        cout<<___print<<endl;
    }
    RR
}