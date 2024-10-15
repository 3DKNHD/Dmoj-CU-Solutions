#include<iostream>
using namespace std;
#define Hd main(void)

Hd
{
    long long cp;
    cin>>cp;
    while(cp--){
    long long a,b,c=0;
    cin>>a;
    for(long long i=0;i<a;i++){
        cin>>b;
        c+=b;
    }
    a--;
    cout<<c-a<<endl;
    }
    return 0;
}