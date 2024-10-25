#include <bits/stdc++.h>
#define Hd main()
using namespace std;

void sumarStrigns(string& a,string b,string c,string& d){
    string z;
    if(a.size()<b.size()){
        z=b;
        b=a;
        a=z;
        }
    long long rest=0,i,j;
    for(i=a.size()-1,j=b.size()-1;j>=0;j--,i--){
        long long ax=a[i]-'0',bx=b[j]-'0';
        long long aux=ax+bx+rest;
        long long cx=aux%10;aux/=10;
        c+=to_string(cx);
        rest=aux;
    }
    for(;i>=0;i--){
        long long cx=a[i]-'0',aux=cx+rest;
        cx=aux%10;aux/=10;
        rest=aux;
        c+=to_string(cx);
    }
    if(rest>0)c+=to_string(rest);
    for(long long n=c.size()-1;n>=0;n--){
    d+=c[n];
    }
}


Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a,b,c="",d="";
    cin>>a;
    cin>>b;
    sumarStrigns(a,b,c,d);
    cout<<d<<"\n";
}