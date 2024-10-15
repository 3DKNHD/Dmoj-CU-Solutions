#include<stdio.h>
#define Hd main()

Hd
{
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(long long i=1;i<=1000;i++){
        if(i*c>=1000){
            a+=i*c;
            break;
        }
    }
    for(long long i=1;i<=1000;i++){
        if(i*b>=1000){
            a+=(i-1)*b;
            break;
        }
    }
    printf("%lld\n",a);
}