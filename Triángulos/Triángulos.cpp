#include <stdio.h>
#define Hd main(void)
Hd{
    int P,con=0;
    scanf("%d", &P);
    for(int i=1;i<P/3+1;i++){
        for(int j=i;j<(P-i)/2+1;j++){
            int aux = P-(i+j);
            if((aux<(i+j))&&(i<(aux+j))&&(j<(i+aux)))con++;
        }
    }
    printf("%d",con);
}
