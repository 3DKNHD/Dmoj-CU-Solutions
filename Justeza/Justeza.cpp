#include <stdio.h>
#define Hd main(void)
long long Solve(long long A, long long B, long long C, long long K) {
    long long diff = (K&1) ? B - A : A - B;
    return diff;
}

Hd{
    long long A, B, C, K;
    scanf("%lld%lld%lld%lld",&A,&B,&C,&K);
    long long result = Solve(A, B, C, K);
    printf("%lld\n",result);
}
