#include<stdio.h>
#define Hd main(void)

Hd
{
    long long x,y,r;
    scanf("%lld%lld%lld",&x,&y,&r);
    printf("%lld %lld\n%lld %lld\n%lld %lld\n%lld %lld",x-r,y+r,x+r,y+r,x+r,y-r,x-r,y-r);
}