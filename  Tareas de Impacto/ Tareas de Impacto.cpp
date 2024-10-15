#include<bits/stdc++.h>
#define Hd main(void)
Hd
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    int a[k+1] = {};
    while(n--){
        long long aux,ab;
        scanf("%lld%lld",&aux,&ab);
        for(;aux<=ab;aux++){
            a[aux]++;
        }
    }
    std::sort(a,a+(k+1),std::greater<int>());
    long long con=a[0];
    long long cv=std::count(a,a+(k+1),con);
    printf("%lld",cv);
}