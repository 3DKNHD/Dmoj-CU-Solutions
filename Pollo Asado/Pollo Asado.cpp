#include<stdio.h>
#define Hd main(void)
Hd{
    long long cp;
    scanf("%lld",&cp);
    while(cp--){
        long long p;
        scanf("%lld",&p);
        printf("%s\n",(p>11? "YES":(p%3==0||p%7==0||p%10==0? "YES":"NO")));
    }
}
