#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#define Hd main(void)
using namespace std;
Hd{
    long long N;
    scanf("%lld",&N);
    long long P;
    scanf("%lld",&P);
    
    long long e1, e2, e3;
    scanf("%lld%lld%lld",&e1,&e2,&e3);

    long long d1[]={abs(N-e1+P),abs(N-e2+P),abs(N-e3+P)};
    long long d2[]={abs(N-P+e1),abs(N-P+e2),abs(N-P+e3)};
    long long d3[]={abs(P-e1),abs(P-e2),abs(P-e3)};
    sort(d1,d1+3);
    sort(d2,d2+3);
    sort(d3,d3+3);
    long long dMin=d1[0];
    dMin=min(dMin,min(d2[0],d3[0]));
    printf("%lld",dMin);
}

