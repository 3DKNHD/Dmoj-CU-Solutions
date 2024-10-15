#include<stdio.h>
#define Hd main(void)
Hd
{
    int a,b,c,sa,sb,sc;
    scanf("%d%d%d",&a,&b,&c);
    sa = a%10;
    sa += (a/10)%10;
    sb = b%10 + (b/10)%10 + ((b/100)%10) + ((b/1000)%10);
    sc = c%10 + ((c/10)%10) + ((c/100)%10) + ((c/1000)%10) + ((c/10000)%10);
    if(sa==sb&&sb==sc){
        printf("%d",(a>b? (a>c? a:c):(b>c? b:c)));
    }
    else if(sa==sb&&sc<sa){
        printf("%d",(a>b? a:b));
    }
    else if(sa==sc&&sb<sc){
        printf("%d",(a>c? a:c));
    }
    else if(sb==sc&&sa<sb){
        printf("%d",(b>c? b:c));
    }
    else if(sa>sb&&sa>sc){
        printf("%d",a);
    }
    else if(sb>sa&&sb>sc){
        printf("%d",b);
    }
    else printf("%d",c);
}