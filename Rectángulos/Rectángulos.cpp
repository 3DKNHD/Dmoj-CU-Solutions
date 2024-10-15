#include<stdio.h>

#define Hd main()
Hd
{
    long long c,i=0,aux=1;
    scanf("%lld",&c);
    while(aux*aux<=c){
        long long a=c/aux;
        if(a*aux==c)i++;
        aux++;
    }
    printf("%lld",i);
    return 0;
}