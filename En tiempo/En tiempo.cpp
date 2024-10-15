#include<stdio.h>
#define Hd main(void)
Hd
{
    int d1,h1,m1,d2,h2,m2;
    scanf("%d%d%d\n%d%d%d",&d1,&h1,&m1,&d2,&h2,&m2);
    d1=(d1*1440)+(h1*60)+m1;
    d2=d1-((d2*1440)+(h2*60)+m2);
    printf("%d",(d2>=0? d2:-1*d2));
}
