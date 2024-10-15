#include<stdio.h>
#define MIN -1000001
#define MAX 1000001
#define Hd main()
Hd{
    long long cp,miy=MAX,mix=MAX,my=-1,mx=-1;
    scanf("%lld",&cp);
    while(cp--) {
        long long s,p,a,b;
        scanf("%lld%lld%lld%lld",&s,&a,&b,&p);
        if(p==0) {
            mix=(mix>b? b:mix);
            mx=(mx<b+s? b+s:mx);
            miy=(miy>a? a:miy);
            my=(my<a? a:my);
        }
        else {
            miy=(miy>a? a:miy);
            my=(my<a+s? a+s:my);
            mix=(mix>b? b:mix);
            mx=(mx<b? b:mx);
        }
    }
    long long y=my-miy,x=mx-mix;
    if(y<0)y*=-1;
    if(x<0)x*=-1;
    printf("%lld %lld\n",y,x);
}