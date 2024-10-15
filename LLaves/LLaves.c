#include <stdio.h>

#define Hd main(void)

Hd {
    int n, k;
    scanf("%d%d",&n,&k);
    char a[n];
    scanf("%s", a);

    int e = n - k;
    char b[e];
    int lastp = 0;

    for (int i = 0; i < n; i++) {
        while (lastp > 0 && b[lastp - 1] < a[i] && (lastp - 1 + (n - i) >= e)) {
            lastp--;
        }
        if (lastp < e) {
            b[lastp++] = a[i];
        }
    }
    for(int i=0;i<e;i++)printf("%c",b[i]);
}