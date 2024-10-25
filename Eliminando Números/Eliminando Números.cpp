#include <bits/stdc++.h>
using namespace std;
#define Hd main(void)
vector<bool> isPrime;
void criba(long long n) {
    isPrime = vector<bool>(n+1, true);
    long long itercont = 0;
    isPrime[0] = isPrime[1] = false;
    for (long long i=2; i<=n; i++) {
        if (isPrime[i]){
            itercont++;
            for (long long h=i; h<=n; h+=i){
                    isPrime[h] = false;
            }
        }
    }
    cout<<itercont<<endl;
}
Hd
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n;
    for(int i=0;i<10;i++){
        cin>>n;
        criba(n);
    }
}