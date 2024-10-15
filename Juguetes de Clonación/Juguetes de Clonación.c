#include<stdio.h>
#define Hd main(void)
Hd
{
    int cp;
    scanf("%d",&cp);
    while(cp--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b&&b>1){
            printf("%s\n",(a%2==0&&b%2==1 || (a%2==1&&b%2==0))? "YES":"NO");
        }
        else if(b==a+1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}