#include <stdio.h>
#define Hd main(void)
#define IMAX 2147483647
Hd
{
    long long xp = 3;
    while (xp--)
    {
        long long n, m, k;
        scanf("%lld%lld%lld",&n,&m,&k);
        for (int i = 1; i < IMAX; i++)
        {
            if (i != n && i != m && i != k && i != n + m && i != n + k && i != m + k && i != n + m + k)
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
}
