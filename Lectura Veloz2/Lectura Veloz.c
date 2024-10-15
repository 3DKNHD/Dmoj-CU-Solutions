#include<stdio.h> 
#define Hd main(void)
Hd{
    long long lip,vcs;
    scanf("%lld%lld",&lip,&vcs);
    while(vcs--) {
        long long aut=lip,ml,tl,tr,at=0;
        scanf("%lld%lld%lld",&ml,&tl,&tr);
        while(aut>0) {
            for(long long i=1; i<=tl; i++) {
                aut-=ml;
                at++;
                if(aut<=0)break;
            }
            if(aut>0) {
                at+=tr;
            }
        }
        printf("%lld\n",at);
    }
}
