#include <stdio.h>
#define Hd main(void)

Hd{
    short int n,m,k;
    scanf("%hd%hd%hd",&m,&n,&k);
    if(n==0||m<2){
        printf("0");
        return 0;
    }
    short int ans=0;
    for(short int i=0;i<=k;i++){
        short int a=m-(k-i),b=n-i;
        a/=2;
        a=(a>b? b:a);
        ans =(ans>a? ans:a);
    }
    printf("%hd",ans);
}