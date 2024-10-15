#include<stdio.h>
#define Hd main(void)

int c(int a,int b)
{
    int co=0;
    while(a>0){
        if(a%10==4)co++;
        a/=10;}
    while(b>0){
        if(b%10==4)co++;
        b/=10;}
    return co;
}

Hd{
    int H,M;
    scanf("%d%d",&H,&M);
    int con =0;
    if(H>=8 && H<=20){
        con+=c(H,M);
    }
    M++;
    if(M==60){
        M%=60;
        H++;
        H%=24;
    }
    if(H>=8 && H<=20){
        con+=c(H,M);
    }
    M++;
    if(M==60){
        M%=60;
        H++;
        H%=24;
    }
    if(H>=8 && H<=20){
        con+=c(H,M);
    }
    printf("%d %d %d",H,M,con);
}