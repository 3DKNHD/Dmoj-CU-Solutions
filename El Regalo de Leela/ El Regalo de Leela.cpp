#include<stdio.h>
#define Hd main(void)

int ABS(int a){
    return (a>0? a:a*-1);
}
Hd { 
    int n;
    scanf("%d",&n);
    int mp=0;
    int ar[n];
    scanf("%d",&ar[0]);
    for(int i=1; i<n; i++) {
        scanf("%d",&ar[i]);
        if(ar[i]>ar[mp]) {
            mp = i;
        }
    }
    int aux=ar[mp]/2,posa=-1,ans;
    for(int i=0; i<n; i++) {
        if(i!=mp){
            if(posa==-1){
                ans=ar[i];
                posa=1;
            }
            else{
                int a=ABS(ans-aux),b=ABS(ar[i]-aux);
                if(a>b){
                    ans=ar[i];
                }
                else if(a==b&&ans<ar[i]){
                    ans=ar[i];
                }
            }
        }
    }
    printf("%d %d",ar[mp],ans);
}
