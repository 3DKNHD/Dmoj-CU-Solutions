#include<stdio.h>

#define Hd main(void)

Hd
{
    char s[500001];
    for(int i=0;i<500001;i++)s[i]='W';
    int n,minc=500001,maxc=-1;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        minc = (a<minc? a:minc);
        minc = (b<minc? b:minc);
        maxc = (a>maxc? a:maxc);
        maxc = (b>maxc? b:maxc);
        for(;a<=b;a++){
            s[a]=(s[a]=='W'? 'B':'W');
        }
    }
    int mx=0,aux=0;
    for(int i=minc;i<=maxc;i++){
        //printf("%c",s[i]);
        if(s[i]=='B'){
            aux++;
            mx = (mx<aux? aux:mx);
        }
        else{
            mx = (mx<aux? aux:mx);
            aux=0;
        }
    }
    printf("%d",mx);
}