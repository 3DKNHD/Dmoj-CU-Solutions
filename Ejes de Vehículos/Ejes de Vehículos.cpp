#include <stdio.h>
#define Hd main(void)
long long mcd(long long a,long long b){
    return (a%b==0? b:mcd(b,a%b));
}

Hd
{
    long long a,b,cp;
    scanf("%lld%lld",&cp,&a);
    cp--;
    while(cp--){
        scanf("%lld",&b);
        a=a*b/mcd(a,b);
    }
    printf("%lld",a);
}
