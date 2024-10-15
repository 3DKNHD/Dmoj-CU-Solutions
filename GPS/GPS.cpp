#include<stdio.h>

#define Hd main()
Hd
{
    long long c,old,aux,cc=1,mt=1;
    scanf("%lld",&c);
    scanf("%lld",&old);
    c--;
    while(c--){
        scanf("%lld",&aux);
        if(aux>old){
            cc++;
            if(cc>mt)mt=cc;
       }
        
        else {
            cc=1;
        }
        old=aux;
    }
    printf("%lld",mt);
}