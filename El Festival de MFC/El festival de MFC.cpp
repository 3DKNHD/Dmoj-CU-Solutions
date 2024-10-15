#include <stdio.h>
#define Hd main(void)

long long mi(long long a, long long b){
    return (a<b? a:b);
}

Hd
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    long long a[n];
    long long c=0;
    for(long long i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]==k)c++;
    }
    if(c<=1){
        printf("-1");
        return 0;
    }
    long long dist =10000000;
    for(long long i=0;i<n;i++){
        if(a[i]==k){
            for(long long j=i+1;j<n;j++){
                if(a[j]==k){
                    dist=mi(dist,(j-i)-1);
                    break;
                }
            }
        }
        if(a[i]==k){
            for(long long j=i+1;j<n;j++){
                if(a[j]==k){
                    dist=mi(dist,(j-i)-1);
                    break;
                }
            }
        }
    }
    printf("%lld",dist);
}
