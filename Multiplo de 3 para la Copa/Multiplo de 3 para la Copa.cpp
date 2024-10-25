#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

long long FV(long long n,long long dge,long long nume){
    if(n==0){
        if(nume%3==0 && nume>0)return dge;
        return -1;
    }
    else{
        long long a = FV(n/10,dge+1,nume);
        long long b = FV(n/10,dge,nume+n%10);
        if(a == -1 && b == -1){
            return -1;
        }
        else{
            if(a==-1)return b;
            if(b==-1)return a;
            return min(a,b);
        }
    }
}

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long num,aux=1;
    cin>>num;
    cout<<FV(num,0,0);
}