#include<iostream>
#include<algorithm>
using namespace std;
#define Hd main(void)
Hd { 
    long long n;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0; i<n; i++) {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    long long ans = n,ant=a[0],pes=0,cmo = 1;
    for(int i = 1; i<n; i++) {
        if(2*(ant+pes)>=a[i]) {
            cmo++;
        }
        else {
            cmo = 1;
        }
        pes+=ant;
        ant=a[i];
    }
    printf("%lld",cmo);
}
