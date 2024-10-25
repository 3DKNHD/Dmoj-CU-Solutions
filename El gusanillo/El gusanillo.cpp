#include<iostream>
using namespace std;
#define Hd main(void)
long long mcd(long long a, long long b){
    return (a%b? mcd(b,a%b):b);
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long a,b,h;
    cin>>a>>b>>h;
    long long aux=b*h/mcd(b,h);
    long long i=1+int(a/aux);
    cout<<i<<"\n";
}