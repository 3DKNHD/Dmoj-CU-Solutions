#include<stdio.h>
#define Hd main(void)
Hd
{
    long long cp,n;
    scanf("%lld",&cp);
    while(cp--){
        scanf("%lld",&n);
        n=(n*(n+1)/2)+1;
        printf("%lld\n",n);
    }
}
