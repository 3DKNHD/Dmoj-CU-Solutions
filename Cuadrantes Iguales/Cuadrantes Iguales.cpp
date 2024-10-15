#include <stdio.h>
#define Hd main(void)
int cuadrante(long long x,long long y){
    if(x==0){
        if(y<0)return 7;
        if(y>0)return 8;
        return 0;
    }
    if(x>0){
        if(y>0)return 1;
        if(y<0)return 4;
        return 5;
    }
    if(y>0)return 2;
    if(y<0)return 3;
    return 6;
}

Hd
{
    long long x1,x2,y1,y2;
    scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
    printf("%s",(cuadrante(x1,y1)==cuadrante(x2,y2)? "SI":"NO"));
}