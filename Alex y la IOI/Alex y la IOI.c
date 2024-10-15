#include<stdio.h>
#include<string.h>
#define Hd main(void)
Hd
{
    int sic,ap1,ap2;
    char lista[100000];
    lista[0] = '\0';
    scanf("%d%d%d",&sic,&ap1,&ap2);
    scanf("%s",lista);
    printf("%d",(lista[(ap1-1)]==lista[(ap2-1)]? 0:1));
}
