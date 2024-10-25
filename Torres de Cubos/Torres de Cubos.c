#include<stdio.h>
#include<string.h>
#include<math.h>
#define Hd main(void)

Hd
{
    int n,v;
    scanf("%d%d",&n,&v);
    int cbnes=0,idnums=0,nm=0;
    char mc[1] = {' '};
    while(n--){
        int eq = 1;
        int sumd[] = {0,0,0,0,0,0,0,0,0};
        char a[10];
        scanf("%s",a);
        int s = strlen(a)-1;
        if(mc[0]==' ')mc[0] = a[0];
        for(int i=0;i<=s-i;i++){
            if(a[i]!=a[s-i]){
                eq = 0;
                if(a[i]>mc[0]){
                    mc[0]=a[i];
                    nm=1;
                    sumd[((a[i]-'0')-1)] = 1;
                }
                else if(!sumd[((a[i]-'0')-1)] && a[i] == mc[0]){
                    nm++;
                    sumd[((a[i]-'0')-1)] = 1;
                }
                if(a[s-i]>mc[0]){
                    mc[0]=a[s-i];
                    nm=1;
                    sumd[((a[s-i]-'0')-1)] = 1;
                }
                else if(!sumd[((a[s-i]-'0')-1)] && a[s-i] == mc[0]){
                    nm++;
                    sumd[((a[s-i]-'0')-1)] = 1;
                }
                cbnes += abs(a[s-i]-a[i]);
            }
            else{
                if(a[i]>mc[0]){
                    mc[0]=a[i];
                    nm=1;
                    sumd[((a[i]-'0')-1)] = 1;
                }
                else if(!sumd[((a[i]-'0')-1)] && a[i] == mc[0]){
                    nm++;
                    sumd[((a[i]-'0')-1)] = 1;
                }
            }
        }
        if(eq)idnums++;
    }
    if(v==1||v==4)printf("%c %d\n",mc[0],nm);
    if(v==2||v==4)printf("%d\n",idnums);
    if(v==3||v==4)printf("%d",cbnes);
}