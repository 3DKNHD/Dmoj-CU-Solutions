#include <stdio.h>
#define Hd main(void)
Hd
{
    int n, k;
    scanf("%d %d", &n, &k);
    int alturas[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &alturas[i]);
    }

    int actsum = 0;
    int minsum = 0;
    int minind = 0;
    
    for (int i = 0; i < k; i++) {
        actsum += alturas[i];
    }
    
    minsum = actsum;

    for (int i = 1; i < n - k + 1; i++) {
        actsum = actsum - alturas[i - 1] + alturas[i + k - 1];
        if (actsum < minsum) {
            minsum = actsum;
            minind = i;
        }
    }

    printf("%d", minind + 1);
}