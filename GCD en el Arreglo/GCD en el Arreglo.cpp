#include<bits/stdc++.h> 
using namespace std;
#define Hd main(void)

Hd
{
    long long a,b;
    scanf("%lld %lld",&a,&b);;
    long long ar[100001];
    scanf("%lld",&ar[0]);
    long long gc=ar[0];
    for(long long i=1; i<a; i++) {
        scanf("%lld",&ar[i]);
        gc=__gcd(gc,ar[i]);
    }
    while(b--) {
        long long an,div;
        scanf("%lld %lld",&an,&div);
        ar[an-1]/=div;
        long long aux=ar[an-1];
        gc=__gcd(gc,aux);
        printf("%lld\n",gc);
    }
}