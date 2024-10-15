#include<stdio.h>
#define Hd main(void)
Hd{
    int cp,n;
    scanf("%d",&cp);
    int x[100001];
    x[0] = x[1] = 1;
    for(int i=2;i<=100000;i++){
            x[i] = (x[i-1]+x[i-2]) % 1000000007;
        }
    while(cp--){
        scanf("%d",&n);
        printf("%d\n",x[n]);
    }
}
