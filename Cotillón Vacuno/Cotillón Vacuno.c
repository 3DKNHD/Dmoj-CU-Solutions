#include<stdio.h>
#define Hd main(void)
Hd 
{
    short n;
    scanf("%hd",&n);
    while(n--){
        int x;
        scanf("%d",&x);
        char s[x];
        scanf("%s",s);
        int aux=0;
        for(int i=0;i<x&&aux>=0;i++){
            if(s[i]=='>')aux++;
            else aux--;
        }
        printf("%s\n",(aux? "illegal":"legal"));
    }
}