#include<stdio.h>
#define Hd main
Hd()
{
    long long cp;
    scanf("%lld",&cp);
    while(cp--){
        long long a,b;
        scanf("%lld%lld",&a,&b);
        long long result;
        if(b==a)result=1;
        else{
            a++;
            result=b%10;
            while(b>a){
                if(result==0){result=0;break;}
                else result*=(a%10);
                result%=10;
                a++;
            }
        }
        printf("%lld\n",result);
    }
}