#include<stdio.h>
#define Hd main(void)

Hd{
    int n;
    scanf("%d",&n);
    int sa = 0;
    for(int i=0;i<=n;i++)sa+=((n+1)-i)*i;
    int sb = 0;
    for(int i=0;i<=n;i++)sb+=(i+1)*i;
    for(int i=1;i<((n+1)*(n+2)/2);i++){
        int a,b;
        scanf("%d%d",&a,&b);
        sa-=a;
        sb-=b;
    }
    printf("%d %d",sa,sb);
}
