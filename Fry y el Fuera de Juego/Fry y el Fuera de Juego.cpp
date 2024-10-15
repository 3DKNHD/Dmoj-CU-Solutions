#include<stdio.h>
#define Hd main(void)

Hd
{
    int n,cont=0;
    scanf("%d",&n);
    long long tam[12];
    for(int i=1;i<12;i++){
        scanf("%lld",&tam[i]);
    }
    for(int i=1;i<12;i++){
        long long aux;
        scanf("%lld",&aux);
        if(tam[n]>aux)cont++;
    }
    printf("%s\n",(cont>=2? "GOAL":"OFFSIDE"));
}
