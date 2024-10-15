#include<stdio.h>
#define Hd main(void)

Hd
{
    const int dd = 1140;
    const int d = 102.5;
    const int u = 10.5;
    unsigned long long n,Xl=0,Xs=0,X=0;
    scanf("%llu",&n);
    if(n>=144){
        Xl = n/144;
        n %= 144;
    }
    if(((n/12)*(d)) + ((n%12)*(u)) > dd){
        n=0;
        Xl+=1;
    }
    if(n>11){
        Xs = n/12;
        n%=12;
    }
    if(n>=10){
        Xs++;
        n=0;
    }
    X=n;
    printf("%llu %llu %llu",Xl,Xs,X);
}
