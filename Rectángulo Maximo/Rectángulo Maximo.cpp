#include<stdio.h>
#define fill(k,n) for(int a=0;a<n;a++)k[a]=0
#define Hd main(void)

int solve(short int mat[101][101], short int n){

    int max_sum = -1000000009;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int acum[n];
            fill(acum,n);
            for(int k=i;k<=j;k++){
                for(int l=0;l<n;l++){
                    acum[l] += mat[k][l];
                }
            }
            int aux=0, max_aux = -1000000009;
            for(int k = 0; k<n;k++){
                aux += acum[k];
                if(aux > max_aux)max_aux = aux;
                if(aux < 0) aux = 0;
            }
            if(max_aux > max_sum){
                max_sum = max_aux;
            } 
        }
    }
    return max_sum;
}

Hd
{
    short int n;
    scanf("%hd",&n);
    short int mat[101][101];
    for(short int i=0;i<n;i++){
        for(short int j=0;j<n;j++){
            scanf("%hd",&mat[i][j]);
        }
    }
    int ans = solve(mat,n);
    printf("%d",ans);
}