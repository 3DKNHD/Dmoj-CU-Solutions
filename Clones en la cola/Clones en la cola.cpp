#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)

Hd
{
    unordered_map<long long,long long> v;
    long long cp,c=0;
    scanf("%lld",&cp);
    long long ac=0;
    for(long long i=0;i<cp;i++){
        long long aux;
        scanf("%lld",&aux);
        v[aux]++;
        ac+=(i+1)-v[aux];
        printf("%lld ",ac);
    }
}
