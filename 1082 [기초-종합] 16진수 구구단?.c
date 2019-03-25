#include <stdio.h>

int main()
{
    int i, j;
    int a;

    scanf("%x", &a);

    for(i = 1; i < 16; i++)
    {
        printf("%X*%X=%X\n", a, i, a * i);
    }
}
