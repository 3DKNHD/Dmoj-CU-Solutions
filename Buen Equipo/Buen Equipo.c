#include<stdio.h>
#define Hd main()
long long pp(unsigned long long a) {
    return a*a*a;
}
long long pt(unsigned long long a) {
    return a*a;
}
long long min(long long a,long long b){
    return (a>b? b:a);
}
Hd{
    long long a,suma=0;
    scanf("%lld",&a);
    for(long long i=1; pp(i)<=a; i++) {
        suma+=(i)*(min(a+1,pp(i+1))-pp(i));
    }
    for(long long i=0; pt(i)<=a; i++) {
        suma+=(i+1)*(min(a,pt(i+1))-pt(i));
    }
    printf("%lld\n",suma);
}