#include <stdio.h>
#define Hd main(void)

long long ma(long long a, long long b){
    return (a>b? a:b);
}

long long mi(long long a, long long b){
    return (a>b? b:a);
}

long long ab(long long a){
    return (a>0? a:-a);
}

Hd
{
    long long n;
    scanf("%lld",&n);
    long long n1=1,n2=n,difmin=n-1;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            long long a1=n/i,a2=i;
            if(ab(a1-a2)<difmin){
                n1=a2;n2=a1;difmin=ab(n1-n2);
            }
        }
    }
    long long aux=mi(n1,n2);
    n1=ma(n1,n2);
    n2=aux;
    printf("%lld %lld",n2,n1);
}
