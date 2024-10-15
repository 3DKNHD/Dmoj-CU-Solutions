#include<stdio.h>
#include<algorithm>

#define Hd main(void)

Hd
{
    int n,ans=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)scanf("%d",&ar[i]);
    std::sort(ar,ar+n);
    for(int i=0;i<n;i++){
        if(i==n-1 or ar[i]!=ar[i+1])ans++;
    }
    printf("%d",ans);
}