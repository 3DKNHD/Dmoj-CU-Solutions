#include<stdio.h>
#define Hd main(void)
long long gcd(long long a,long long b){
    return (a%b==0? b:gcd(b,a%b));
}
Hd
{
    long long num=0,den=0;
    long long n,k;
    scanf("%lld%lld",&k,&n);
    for(long long b=n;b>k;b--){
        for(long long a=k;a<b;a++){
            if(gcd(a,b)==1){
                if(den==0){
                    num=a;
                    den=b;
                }
                else{
                    long long aux=den*b/gcd(den,b);
                    num*=aux/den;
                    num+=a*aux/b;
                    den=aux;
                    aux=gcd(den,num);
                    num/=aux;den/=aux;
                }
            }
        }
    }
    printf("%lld/%lld\n",num,den);
}
