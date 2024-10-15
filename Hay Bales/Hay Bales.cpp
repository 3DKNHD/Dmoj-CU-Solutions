#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#define Hd main(void)
using namespace std;
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,tot=0,tm=0;
    cin>>n;
    vector<long long> a(0);
    for(long long i=0;i<n;i++){
        long long aux;
        cin>>aux;
        tot+=aux;
        a.push_back(aux);
    }
    tot/=n;
    sort(a.begin(),a.end());
    for(long long i=0;i<n;i++){
        if(a[i]>=tot)break;
        tm+=tot-a[i];
    }
    cout<<tm;
}