#include<stdio.h>
#define Hd main()
Hd
{
    long long n,cont=0;
    scanf("%lld",&n);
    for(long long i=n;i>=1;i--){
        for(long long j=1;j<=i;j++){
            for(long long k=1;k<=j;k++){
                if(k*j*i==n)cont++;
            }
        }
    }      

printf("%lld",cont);
}
