#include<stdio.h>
#define Hd main(void)
long long gcd(long long a, long long b) {
    return (a%b==0)? b:gcd(b,a%b);
}
Hd {
    long long cp;
    scanf("%lld",&cp);
    while(cp--) {
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        long long d=gcd(a,b);
        printf("%s\n",c%d==0? "YES":"NO");
    }
    return 0;
}