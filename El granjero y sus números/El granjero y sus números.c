#include<stdio.h>
#include<stdbool.h>
#define Hd main(void)
bool div[1000001];
int ar[1000001];

void gpd(){
    ar[0] = ar[1] = 0;
    int aux = 0;
    for(int i=2;i<=1000001;i++){
        if(div[i]){
            aux++;
            for(int j=i+i;j<=1000001;j+=i){
                div[j]=false;
            }
        }
        ar[i]=aux;
    }
}

Hd
{
    for(int i=0;i<=1000001;i++){
        div[i]=true;
    }
    gpd();
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",ar[b]-ar[a-1]);
    }
}