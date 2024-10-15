#include<bits/stdc++.h>
using namespace std;
#define Hd main(void)
Hd{
    unordered_map<long long, int> a(0);
    long long cp;
    scanf("%lld",&cp);
    long long aux=0,nume;
    while(cp--) {
        long long num;
        scanf("%lld",&num);
        a[num]++;
        if(a[num]>aux) {
            aux=a[num];
            nume=num;
        }
        if(a[num]==aux){
            nume=min(num,nume);
        }
    }
    printf("%lld",nume);
}
