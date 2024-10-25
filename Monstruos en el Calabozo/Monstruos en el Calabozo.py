#define Hd
MOD = 10**9 + 7

def modular_inverse(a, m):
    return pow(a, m-2, m)

def solve(N, M, k):
    if(k>N or k>M):
        return 0
    fac_k = 1
    for i in range(1, k+1):
        fac_k = (fac_k * i) % MOD
    fac_N = 1
    for i in range(1, N+1):
        fac_N = (fac_N * i) % MOD
    fac_Nk = 1
    for i in range(1, N-k+1):
        fac_Nk = (fac_Nk * i) % MOD
    fac_Mk = 1
    for i in range(1, M-k+1):
        fac_Mk = (fac_Mk * i) % MOD
    fac_M = 1
    for i in range(1, M+1):
        fac_M = (fac_M * i) % MOD

    res = (modular_inverse(fac_k, MOD)*modular_inverse(fac_Nk, MOD))%MOD
    res = (res * modular_inverse(fac_Mk,MOD))%MOD
    res = (res * fac_M)%MOD
    res = (res*fac_N)%MOD
    return res


N,M,k=map(int,input().split())
result = solve(N, M, k)
print(result)