#include<stdio.h>
#define Hd main(void)

Hd
{
    int N,Q;
    scanf("%d%d",&N,&Q);
    long long ar[N+1];
    ar[0]=0;
    for(int i=1;i<=N;i++){
        int aux;
        scanf("%d",&aux);
        ar[i] = ar[i-1] + aux;
    }
    while(Q--){
        int u,v;
        scanf("%d%d",&u,&v);
        printf("%lld\n",ar[v]-ar[u-1]);
    }
}