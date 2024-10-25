#include<stdio.h>
#include<stdbool.h>
#define Hd main()

Hd
{
    while(true) {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        if(a==0)break;
        long long aux=(b>a? b:a);
        a=(b>a? a:b);
        b=aux;
        printf("%lld\n",(a*2)-b);
    }
}