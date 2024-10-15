#include<stdio.h>
#include<math.h>
#define Hd main(void)

Hd
{
    int c;
    long long n;
    scanf("%d",&c);
    while(c--){
        scanf("%lld",&n);
        printf("%d\n",(int)sqrt(n));
    }
}
