#include <iostream>
#define Hd main(void)

using namespace std;
Hd
{
    ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);
    long long x,m,i,maxim=0;
    cin>>x>>m>>i;
    for(int j=0;j<10000;j++){
        if(j*x>i)break;
        for(int k=0;k<10000;k++){
            if(j*x+k*m<=i){
            maxim=max(maxim,j*x+k*m);
            }
          }
       }
       cout<<maxim<<endl;
}