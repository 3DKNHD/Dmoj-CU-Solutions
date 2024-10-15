#include<stdio.h>
#define Hd main(void)

#define ABS(a) a=(a>0? a:a*-1)
#define MAX 10000001

Hd
{
    int a,b;
    scanf("%d%d",&a,&b);
    int prims[MAX];
    long long aux[MAX];
    for(int i=3;i<MAX;i+=2){
        prims[i]=i;
    }
    for(int i=2;i<MAX;i+=2){
        prims[i]=2;
    }
    for(int i=3;i*i<MAX;i+=2)
    if(prims[i]==i){
        for(int j=i*i;j<MAX;j+=2*i){
            prims[j]=i;
        }
    }
    aux[1] = 1;
    for(int i = 2; i<MAX; i++){
    int j=i;
    long long k=prims[i];
    while(j%prims[i]==0){
        j/=prims[i];
        k*=prims[i];
    }

    k=(k-1)/(prims[i]-1);

    aux[i]=aux[j]*k;
    }
    long long ans = 0;
    for(long long x = (2ll*a-aux[a]);a<=b;a++,x = (2ll*a-aux[a]))ans+=ABS(x);
    printf("%lld",ans);
}