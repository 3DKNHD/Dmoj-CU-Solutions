#include<stdio.h>
#define Hd main()

long long answr(long long n){
    if(n<=1)return 1;
    return (n%2==0? 2*answr(n/2)-1:2*answr(n/2)+1);
}

Hd
{
    long long t;
    scanf("%lld",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long a=answr(n);
        printf("%lld\n",a);
    }
}
