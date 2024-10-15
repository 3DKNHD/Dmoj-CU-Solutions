#include <stdio.h>
#define Hd main(void)

Hd
{
    long long n;
    long long minfib=1,maxfib,sum;
    scanf("%lld",&n);
    for(int i=1;i<n;i++){
        minfib+=2*i;
    }
    maxfib = 2*(n-1) + minfib;
    printf("%lld \n%lld \n%lld",n*n*n,minfib,maxfib);
}