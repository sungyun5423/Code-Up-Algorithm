#include <stdio.h>

int main()
{
    int a, n;

    scanf("%d", &a);
    reload:
        scanf("%d", &n);
        printf("%d\n", n);
    if(--a != 0)
        goto reload;
}
