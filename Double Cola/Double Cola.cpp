#include <stdio.h>
#define Hd main(void)
Hd
{
    long long cp;
    scanf("%lld", &cp);
    while (cp--)
    {
        long long n, c = 0;
        scanf("%lld",&n);
        while (n > 5)
        {
            n >>=1;
            n -= 2;
        }
        
        printf("%s\n",(n==1? "Sheldon":(n==2? "Leonard":(n==3? "Penny":(n==4? "Rajesh":"Howard")))));
    }
}