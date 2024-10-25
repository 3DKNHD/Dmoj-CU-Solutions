#include<stdio.h>
#define Hd main(void)

Hd{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double z = 1.0 +(a/100.0);
    for(double i=0;i<c;i++){
    b*=z;
    }
    printf("%d",(int)b);
}