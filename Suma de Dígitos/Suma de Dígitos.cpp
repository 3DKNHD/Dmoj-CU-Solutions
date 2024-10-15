#include <bits/stdc++.h>
#define Hd main(void)
using namespace std;

Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long aux=0;
    long long n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        aux+=__builtin_popcount(i);
    }
    cout<<aux;
}
