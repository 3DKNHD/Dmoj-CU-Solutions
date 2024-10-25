#include <stdio.h>
const int MOD = 1000000007;
#define int long long
#define Hd main(void)

int binpow(int a, int b, int c) {
    int res = 1;
    while (b > 0) {
        if (b&1) {
            res = (res * a) % c;
        }
        a = (a * a) % c;
        b >>= 1;
    }
    return res;
}

int modular_inverse(int a, int m) {
    int result = binpow(a,m-2,m);
    return result;
}

int solve(int N, int M, int k) {
    if (k > N || k > M) {
        return 0;
    }

    long long fac_k = 1, fac_N = 1, fac_Nk = 1, fac_Mk = 1, fac_M = 1;
    int ax = (N>M? N:M);
    for (int i = 2; i <= ax; i++) {
        if(i<=k)fac_k = (fac_k * i) % MOD;
        if(i<=N)fac_N = (fac_N * i) % MOD;
        if(i<=N-k)fac_Nk = (fac_Nk * i) % MOD;
        if(i<=M-k)fac_Mk = (fac_Mk * i) % MOD;
        if(i<=M)fac_M = (fac_M * i) % MOD;
    }
    long long res = (modular_inverse(fac_k, MOD) * modular_inverse(fac_Nk, MOD)) % MOD;
    res = (res * modular_inverse(fac_Mk, MOD)) % MOD;
    res = (res * fac_M) % MOD;
    res = (res * fac_N) % MOD;
    return res;
}

Hd{
    int N, M, k;
    scanf("%lld%lld%lld",&N,&M,&k);
    int result = solve(N, M, k);
    printf("%lld",result);
}