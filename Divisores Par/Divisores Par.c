#include<math.h>
#include<stdio.h>
#define Hd main(void)

Hd
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    while(a>0&&b>0) {
        long long n=b-(long long)sqrt(b);
        long long m=(a-1)-(long long)sqrt(a-1);
        printf("%lld\n",n-m);
        scanf("%lld%lld",&a,&b);
    }
}