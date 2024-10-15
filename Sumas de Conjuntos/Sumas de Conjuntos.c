#include<stdio.h>
#define Hd main(void)
long long cc(int n) {
    long long dp[n+1];
    for(int i=1;i<=n;i++)dp[i]=0;
    dp[0] = 1;

    for (int i = 0; (1 << i) <= n; i++) {
        int coin = 1 << i;
        for (int j = coin; j <= n; j++) {
            dp[j] += dp[j - coin];
            dp[j]%=1000000000;
        }
    }

    return dp[n];
}

Hd{
    int n;
    scanf("%d",&n);
    printf("%lld",cc(n));
}