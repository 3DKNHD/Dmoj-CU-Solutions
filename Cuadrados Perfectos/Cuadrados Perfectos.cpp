#include<stdio.h>
#define Hd main(void)
Hd
{
    long long a=1,b=0,n;
    scanf("%lld",&n);
    while(a<=500){
        long long aux=a*a;
        for(int i=1;i*i<aux;i++){
            if(aux-(i*i)==n){
                b++;
                break;
            }
        }
        a++;
    }
    printf("%lld",b);
}