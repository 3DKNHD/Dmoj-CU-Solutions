#include<stdio.h>
#define Hd main(void)

#define ABS(a) if(a<0)a*=-1;

Hd
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long a;
        scanf("%lld",&a);
        a|=-a;
        ABS(a)
        printf("%lld\n",a);
    }
}