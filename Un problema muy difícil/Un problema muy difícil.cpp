#include<stdio.h>
#define Hd main(void)
Hd{
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("%d\n",a*b>c*d? a*b:c*d);
    }
}