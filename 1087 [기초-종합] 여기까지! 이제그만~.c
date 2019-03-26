#include <stdio.h>

int main()
{
    int n, i = 1, s = 0;
    scanf("%d", &n);

    for(i = 1; ; i++)
    {
        s += i;
        if(s >= n) break;
    }
    printf("%d", s);
}
