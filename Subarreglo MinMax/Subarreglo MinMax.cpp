#include <bits/stdc++.h>
#define Hd main(void)
using namespace std;

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,minv=100001,maxv=-1;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
        maxv=max(maxv,a[i]);
        minv=min(minv,a[i]);
    }
    long long dist =10000000;
    for(long long i=0;i<n;i++){
        if(a[i]==maxv){
            for(long long j=i+1;j<n;j++){
                if(a[j]==minv){
                    dist=min(dist,(j-i)+1);
                    break;
                }
            }
        }
        if(a[i]==minv){
            for(long long j=i+1;j<n;j++){
                if(a[j]==maxv){
                    dist=min(dist,(j-i)+1);
                    break;
                }
            }
        }
    }
    cout<<dist;
}