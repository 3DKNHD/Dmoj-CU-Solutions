#include<bits/stdc++.h>
#define Hd main(void)
using namespace std;

Hd
{
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b,c,d,e;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        int i=1;
        while(true){
            if(((i*a)%100==0)&&((i*b)%100==0)&&((i*c)%100==0)&&((i*d)%100==0)&&((i*e)%100==0)){
                break;
            }
            i++;
        }
        printf("%d\n",i);
    }
}