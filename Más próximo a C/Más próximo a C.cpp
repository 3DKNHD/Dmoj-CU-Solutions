#include<stdio.h>
#define Hd main(void)


long long AB(long long x){
    return (x<0? -x:x);
}
Hd
{
    long long a,b,c,d,dif;
    scanf("%lld%lld%lld",&a,&b,&c);
    long long v[6];
    v[0]=a+a;
    v[1]=a*a;
    v[2]=b+b;
    v[3]=b*b;
    v[4]=a+b;
    v[5]=a*b;
    dif=AB(c-(a+a));
    d=a+a;
    for(int i=1;i<6;i++){
        if(AB(c-v[i])<dif){
            d=v[i];
            dif=AB(c-d);
        }
        if((AB(c-v[i])==dif)&&(d>v[i])){
            d=v[i];
        }
    }
    printf("%lld",d);
}
