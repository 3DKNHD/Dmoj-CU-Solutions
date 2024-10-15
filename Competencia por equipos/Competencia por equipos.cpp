#include<stdio.h>
#define Hd main(void)

#pragma GCC optimize("Ofast")

Hd
{
    short int n,m;
    scanf("%hd%hd",&n,&m);
    if(m>n){
        printf("NE");
        return 0;
    }
    int sum = 0;
    short int aux;
    for(short int i=0;i<m;i++){
        scanf("%hd",&aux);
        if(aux<4){
            printf("NE");
            return 0;
        }
        sum += (aux/4);
    }
    printf("%s",sum>=n? "DA":"NE");
}