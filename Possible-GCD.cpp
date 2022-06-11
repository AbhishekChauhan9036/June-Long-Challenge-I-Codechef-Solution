#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define RR return 0;
int32_t main(){
    int EkdamDoglehoka=1,________________=0,____OO=0,____ZZ=0,___print=0,__printan=0,_Chalrhnede=0;;
    cin>>EkdamDoglehoka;

    while(EkdamDoglehoka--){
        cin>>____OO>>____ZZ;
        ___print=abs(____OO-____ZZ);
        __printan=0;
        for(int Zohan=1;Zohan<=sqrt(___print);Zohan++){
            if(___print%Zohan==0){
                ((___print/Zohan)==Zohan)?__printan++:__printan+=2; 
            }
        }
        cout<<__printan<<endl;
    }
    RR
}