#include<stdio.h>
#define Hd main()
Hd { long long sum=0,a=0,x,cp,aux;
    scanf("%lld",&cp);
    while(cp--) {
        scanf("%lld",&x);
        aux=a-x;
        if(aux<0)aux*=-1;
        sum+=aux;
        a=x;
    }
    printf("%lld\n",sum);
}