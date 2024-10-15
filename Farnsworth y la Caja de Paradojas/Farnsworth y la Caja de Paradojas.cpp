#include<stdio.h>
#define Hd main(void)

#define max(a,b) a=(b>a? b:a)

Hd
{
    int n,cont=0;
    int ar[101] = {};
    for(int i=0;i<3;i++){
        scanf("%d",&n);
        ar[n]++;
        max(cont,ar[n]);
    }
    printf("%d",cont);
}
