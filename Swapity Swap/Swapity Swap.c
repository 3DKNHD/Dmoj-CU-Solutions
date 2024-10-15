#include<stdio.h>

#define Hd main(void)
Hd
{
    int n,m,x,y,a,b;
    scanf("%d%d\n%d%d\n%d%d",&n,&m,&x,&y,&a,&b);
    int ar[n];
    for(int i=1;i<=n;i++){
        int aux = 1,pos=i;
        if(x<=pos && pos<=y)
            pos = (x+y)-pos;
        if(a<=pos&&pos<=b)
            pos = (a+b)-pos;
        while(pos!=i){
            aux++;
            if(x<=pos && pos<=y)
                pos = (x+y)-pos;
            if(a<=pos&&pos<=b)
                pos = (a+b)-pos;
        }
        int mn = m % aux;
        for(int j=0;j<mn;j++){
            if(x<=pos && pos<=y)
                pos = (x+y)-pos;
            if(a<=pos&&pos<=b)
                pos = (a+b)-pos;
        }
        ar[pos-1] = i;
    }
    for(int i=0;i<n;i++)printf("%d\n",ar[i]);
}