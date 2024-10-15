#include <stdio.h>
#include <string.h>

#define Hd main(void)
Hd {
    char s1[100005];
    char s2[100005];
    int ma[128];
    int answ=0;
    scanf("%s", s1);
    int t=strlen(s1);
    for(int i=0;i<t;i++){
        ma[s1[i]]++;
    }
    scanf("%s", s2);
    t=strlen(s2);
    for (int i = 0; i < t; i++) {
        ma[s2[i]]--;
        if(ma[s2[i]]>=0)answ++;
    }
    printf("%d",answ);
}