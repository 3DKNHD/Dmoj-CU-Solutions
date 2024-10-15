#include <stdio.h>
#define Hd main()
Hd {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b==c) {
        printf("%d+%d=%d\n",a,b,c);
        return 0;
    }
    if(a-b==c) {
        printf("%d-%d=%d\n",a,b,c);
        return 0;
    }
    if(a*b==c) {
        printf("%d*%d=%d\n",a,b,c);
        return 0;
    }
    if(a/b==c) {
        printf("%d/%d=%d\n",a,b,c);
        return 0;
    }
    if(a==b+c) {
        printf("%d=%d+%d\n",a,b,c);
        return 0;
    }
    if(a==b-c) {
        printf("%d=%d-%d\n",a,b,c);
        return 0;
    }
    if(a==b*c) {
        printf("%d=%d*%d\n",a,b,c);
        return 0;
    }
    if(a==b/c) {
        printf("%d=%d/%d\n",a,b,c);
        return 0;
    }
}
