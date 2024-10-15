#include <stdio.h>
#define Hd main(void)
#define int long long

int max(int a,int b){
    return (a>b? a:b);
}
Hd{
    int n;
    scanf("%lld",&n);
    int mat[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 2; j++) {
            scanf("%lld",&mat[i][j]);
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= 2; j++) {
            mat[i][j] += max(mat[i+1][(j+2)%3], mat[i+1][(j + 1)%3]);
        }
    }
    printf("%lld",max(mat[0][0],max(mat[0][1],mat[0][2])));
}
