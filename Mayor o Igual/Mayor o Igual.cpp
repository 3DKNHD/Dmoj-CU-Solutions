#include <stdio.h>
#include <algorithm>
#define Hd main(void)

Hd
{
    int n,k;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
    }
    std::sort(ar,ar+n);
    if(k==0) {
        printf("%d",ar[0]-1);
        return 0;
    }
    if(k==n){
        printf("1000000000");
        return 0;
    }
    else if(ar[k]!=ar[k+1]&&ar[k]!=ar[k-1] && ar[k]-1!=ar[k-1]) {
        printf("%d",ar[k]-1);
        return 0;
    }
    else {
        printf("-1");
        return 0;
    }

}
