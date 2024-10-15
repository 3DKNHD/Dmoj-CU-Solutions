#include <stdio.h>
#define Hd main(void)

long long AB(long long x){
    return (x<0? -x:x);
}
Hd
{
    long long cp, k, a, b;
    scanf("%lld",&cp);
    while (cp--)
    {
        scanf("%lld%lld%lld",&k,&a,&b);
        printf("%lld\n",AB(a-b)<=k? 1:AB(a - b) - k);
    }
}