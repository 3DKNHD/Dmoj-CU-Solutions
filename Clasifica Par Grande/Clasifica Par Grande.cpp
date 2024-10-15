#include<stdio.h>
#include<string.h>
#define Hd main(void)
Hd{
    char n[2000001];
    n[0]='\0';
    scanf("%s",n);
    printf("%c",n[strlen(n)-1]);
}