#include<stdio.h>
#define Hd main(void)
Hd
{
    long long r=0,cp;
    scanf("%lld",&cp);
    for(long long i=1;i<=cp;i++){
        for(long long j=1;j<=cp;j++){
            if(i*j>cp)break;
            for(long long k=1;i*j*k<=cp;k++){
                r++;
            }
        }
    }
    printf("%lld",r);
}
