#include<stdio.h>
#define Hd main(void)

Hd
{
    int n;
    scanf("%d",&n);
    int a,aux=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        a+=aux;
        if(a<i||(i==n&&a>n)){
            printf("No");
            return 0;
        }
        aux = a-i;
    }
    printf("Si");
}