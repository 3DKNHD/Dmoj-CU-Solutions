#include <stdio.h>
#pragma GCC optimize("Ofast")
#define Hd main(void)
Hd
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    a*=b;
    printf("%lld",a-(a%2));
}