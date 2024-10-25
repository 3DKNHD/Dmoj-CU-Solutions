#include<stdio.h>
#define Hd main()
Hd
{
    int cp;
    scanf("%d",&cp);
    while(cp--){
        short int a,b;
        scanf("%hd%hd",&a,&b);
        printf("%hd\n",(b%a)+1);
    }
}