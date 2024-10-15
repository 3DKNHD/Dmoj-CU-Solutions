#include<stdio.h>
#include<vector>
#define Hd main()

Hd
{
    std::vector<long long> oldPos(1000001,-1);
    long long N,K,maxId=-1;
    scanf("%lld%lld",&N,&K);
    for(long long i=1;i<=N;i++){
        long long x;
        scanf("%lld",&x);
        if(oldPos[x]!=-1){
            if(i-oldPos[x]<=K){
                if(x>maxId)maxId=x;
            }
        }
        oldPos[x]=i;
    }
    printf("%lld\n",maxId);
}