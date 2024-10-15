#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
#define Hd main(void)
long long mod;

long long coinChange(std::vector<long long>& coins, long long amount) {
std::vector<long long> dp(amount + 1, 0);
dp[0] = 1;
for(long long coin : coins) {
for(long long i = coin; i <= amount; i++) {
dp[i] = (dp[i]+dp[i - coin])%mod;
}
}
return dp[amount]%mod;
}
Hd
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,lim,lm;
    cin>>n>>lim>>lm>>mod;
    vector<long long> a(0);
    for(; lim<=lm; lim++) {
        long long aux;
        a.push_back(lim);
    }
    cout<<coinChange(a,n);
}