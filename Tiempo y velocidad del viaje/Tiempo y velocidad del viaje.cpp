#include<stdio.h>
#define Hd main(void)

Hd
{
    long long cp,condi=1,alltimemin=0,aut=0;
    long long d=1,td,dd;
    scanf("%lld",&cp);
    long long ah,am,dis;
    scanf("%lld%lld%lld",&ah,&am,&dis);
    dd=dis;
    td=ah*60 + am;
    alltimemin+=td;
    cp--;
    while(cp--){
       condi++;
       scanf("%lld%lld%lld",&ah,&am,&dis);
       long long aux=ah*60 + am;
       alltimemin+=aux;
       if(aux*dd<td*dis){
        d=condi;
        dd=dis;td=aux;
       }
    }
    long long days=alltimemin-alltimemin%1440;
    alltimemin-=days;days/=1440;
    long long hours=alltimemin-alltimemin%60;
    alltimemin-=hours;hours/=60;
    printf("%lld %lld %lld %lld\n",days,hours,alltimemin,d);
}
