#include<iostream>
#include<algorithm>
using namespace std;
#define Hd main(void)
Hd
{
    int n,k;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    int mindif=(int)1e9+1;
    k--;
    for(int i=0;i+k<n;i++){
        if(ar[i+k]-ar[i]<mindif){
            //printf("%d %d\n",ar[i],ar[i+k]);
            mindif=ar[i+k]-ar[i];
        }
    }
    printf("%d",mindif);
}