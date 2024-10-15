#include<stdio.h>
#define Hd main(void)
#define MAX (long long)1e7

int aux[MAX+1];
long long ans;
Hd{
    long long int n,a;
    ans = 0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a);
        ans +=((i-aux[a])*((n-i)+1 ));
        aux[a] = i;
    }
    printf("%lld",ans);
}