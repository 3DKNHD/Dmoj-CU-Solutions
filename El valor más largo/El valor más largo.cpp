#include<stdio.h>
long long ma(long long a, long long b){
    return (a>b? a:b);
}
#define Hd main()
Hd
{
    char aux[3];
    scanf("%s",&aux);
    long long a=aux[0]-'0', b=aux[1]-'0', c=aux[2]-'0';
    long long a1=a+b+c,a2=a+b*c,a3=a*b+c,a4=a*b*c;
    long long r1=ma(a1,a2),r2=ma(a3,a4),r3=ma(r1,r2);
    printf("%lld\n",r3);
}
