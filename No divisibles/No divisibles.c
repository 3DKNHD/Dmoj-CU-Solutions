#include <stdio.h>
#define Hd main(void)
Hd
{
    int a, cont = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
            cont++;
    }
    printf("%d", cont);
}