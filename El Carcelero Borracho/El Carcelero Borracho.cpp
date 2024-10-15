#include<iostream>
#include<vector>
#define Hd main(void)
using namespace std;

vector<bool> isPrime(0);
void criba(long long n) {
    isPrime = vector<bool>(n+1, false);
    for (long long i=2; i<=n; i++) {
            for (long long h=i; h<=n; h+=i) {
                isPrime[h] = (isPrime[h]? false:true);
        }
    }
}
Hd
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    criba(101);
    long long cp;
    cin>>cp;
    while(cp--){
        int n,cont=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(isPrime[i]==false){
            cont++;
            }
        }
        cout<<cont<<"\n";
    }
}