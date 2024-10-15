#include <stdio.h>
#define Hd main(void)

Hd
{
    long long n;
    int mi=0;
    scanf("%lld",&n);
    if(n<0)mi=1;
    n = (n<0? -n:n);
    printf("%lld",(mi ? (n*(n+1) / 2 -1)*-1:n*(n+1)/2));
}
