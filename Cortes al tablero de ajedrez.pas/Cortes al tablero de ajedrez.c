#include <stdio.h>
#define Hd main(void)
Hd
{
    int tablero =0,n;
    scanf("%d",&n);
    int cortes=2,aux=2;
    for(int i=1;i<=n;i++){
        if(i&1){
            tablero=cortes;cortes+=aux;
        }
        else{
            tablero=cortes;cortes+=aux;aux++;
        }
    }
    printf("%d",tablero);
}