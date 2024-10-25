#include<stdio.h>
#define Hd main
int Hd() {
    int n;
    scanf("%d",&n);
    long long a[n+1];
    a[0]=0;
    a[1]=1;
    a[2]=1;
    a[3]=1;
    for(int i=4; i<n+1; i++) {
        a[i]=(2*a[i-3]+a[i-2]+a[i-4])%1000000007;
    }
    printf("%lld\n",a[n]);
    return 0;
}