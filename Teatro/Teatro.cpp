#include <bits/stdc++.h>

using namespace std;
#define Hd main(void)
Hd
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string n;
    long long x,con=2,conl=0;
    cin>>x>>n;
    for(long long i=0;i<x-1;i++){
        if(n[i]=='L'){
            conl++;
            if(conl==2){
                conl=0;
                con++;
            }
        }
        if(n[i]=='S'){
            conl=0;
            con++;
        }
    }
    if(con>x)cout<<x<<endl;
    else cout<<con<<endl;
}