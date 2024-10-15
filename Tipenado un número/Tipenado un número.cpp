#include<stdio.h>
#define Hd main(void)
Hd{
    char n[3];
    scanf("%s",n);
    if(n[0]>n[1]&&n[1]>n[2])
        printf("Descendente");
    else if(n[0]<n[1]&&n[1]<n[2])
        printf("Ascendente");
    else if(n[0]==n[1]&&n[1]==n[2])
        printf("Equilibrado");
    else
        printf("Alterno");
}