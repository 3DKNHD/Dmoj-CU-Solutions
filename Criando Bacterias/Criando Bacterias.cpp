#include<stdio.h>
#include <bitset>
#include <algorithm>
#define Hd main(void)

Hd
{
    long long a;
    scanf("%lld",&a);
    std::bitset<64> n(a);
    printf("%lld",n.count());
}