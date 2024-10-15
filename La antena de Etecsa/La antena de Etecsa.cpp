#include<stdio.h>
#include<math.h>
#define Hd main(void)
Hd{
    int n,r,k;
    scanf("%d%d%d",&n,&k,&r);
    double c=sqrt(n*n+r*r)*k;
    printf("%lld\n",(long long)ceil(c));
}
