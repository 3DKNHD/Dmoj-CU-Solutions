#include <stdio.h>
#define Hd main(void)
long long fromZeroToN(long long val) {
    long long count = 0;
    long long start;
    long long end = val % 10;
    long long set_val = val;
    if (val < 10) {
        return val;
    }
    end = val % 10;
    while (val) {
        start = val % 10;
        val = val / 10;
    }
    if (start <= end) {
        count = 9 + set_val / 10;
    }
    else {
        count = 8 + set_val / 10;
    }
    return count;
}
Hd
{
    long long start = 10, end = 50;
    scanf("%lld%lld",&start,&end);
    unsigned long long count = fromZeroToN(end) - fromZeroToN(start-1);
    printf("%llu",count);
}
