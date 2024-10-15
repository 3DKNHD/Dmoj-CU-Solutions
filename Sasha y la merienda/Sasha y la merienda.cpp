#include<stdio.h>
#define Hd main(void)
Hd
{
    long long total,puedeComer;
    scanf("%lld%lld",&total,&puedeComer);
    long long ar[total];
    for(long long i=0;i<total;i++){
        scanf("%lld",&ar[i]);
    }
    long long solution=0;
    for(long long i=0;i<total;i++){
        long long aux=0,tcp=0;
        for(long long j=i;j<total;j++){
            if(tcp>puedeComer)break;
            if(tcp+ar[j]<=puedeComer){
                tcp+=ar[j];
                aux++;
                if(solution<aux)solution=aux;
            }
        }
    }
    printf("%lld",solution);
}