#include <stdio.h>

int main()
{
    int a, i;

    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    {
        if(i % 3 == 0 || i % 6 == 0 || i % 9 == 0) printf("X ");
        else printf("%d ", i);
    }
}
