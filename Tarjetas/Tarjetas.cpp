#include<stdio.h>
#define Hd main()
Hd
{
    long long n,a,b,oa,ob,cont=1,maxCont=0;
    scanf("%lld",&n);
    scanf("%lld%lld",&oa,&ob);
    for(long long i=1;i<n;i++){
        scanf("%lld%lld",&a,&b);
        if(oa>=b&&ob>=a){
            cont++;
            oa=a;
            ob=b;
            maxCont=(maxCont>cont? maxCont:cont);
        }
        else if(oa>=a&&ob>=b){
            oa=a;
            ob=b;
            cont++;
            maxCont=(maxCont>cont? maxCont:cont);
        }
        else cont=1;oa=a;ob=b;
    }
    printf("%lld\n",maxCont);
}
