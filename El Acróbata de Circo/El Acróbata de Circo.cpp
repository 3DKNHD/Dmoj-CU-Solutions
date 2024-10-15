#include<iostream>
#include<math.h>
using namespace std;
#define Hd main(void)
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string x="+";
    long long a,b;
    cin>>a>>b;
    long long ma=0,o=a;
    while(o>0){
        if(o<b){
            x+='+';
            o+=a;
            ma=max(ma,o);
        }
        else{
            x+='-';
            o-=b;
        }
    }
    cout<<ma<<endl<<x<<endl;
}