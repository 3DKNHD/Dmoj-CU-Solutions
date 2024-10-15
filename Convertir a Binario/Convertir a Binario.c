#include<stdio.h>
#define Hd main(void)

Hd
{
    int cp;
    scanf("%d",&cp);
    while(cp--) {
        int a;
        scanf("%d",&a);
        printf("%d(2) = %b\n",a,a);
    }
}