#include<stdio.h>
#define Hd main()

long long int bpow(long long int base, long long int exp) {
    long long int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

Hd
{
    long long int aux,k,n,m;
    scanf("%lld%lld",&n,&k);
    m=bpow(2,n-1);
    while(m!=k)
    {
        if(k>m)
        {
            aux=k-m;
            k=m-aux;
        }
        n--;
        m=bpow(2,n-1);
    }
    printf("%lld",n);
}