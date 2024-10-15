#include<stdio.h>
#define Hd main(void)

Hd
{
    int n,s,r;
    scanf("%d%d%d",&n,&r,&s);
    while(n--){
        int ma=0,mi=51;
        for(int i=r;i>0;i--){
            char aux[s+1];
            scanf("%s",aux);
            for(int j=0;j<s;j++){
                if(aux[j]=='#'){
                    if(i>ma)ma=i;
                    if(i<mi)mi=i;
                }
            }
        }
        printf("%d\n",ma-mi);
    }
}