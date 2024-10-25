#include<stdio.h>
#define Hd main(void)
Hd
{
    char l;
    scanf("%c",&l);
    int val=0;
    if(l>'B')val++;
    printf("%i",('F'-l)+val);
}