#include <stdio.h>

int main()
{
    int i;
    char a, b;

    scanf("%c %c", &a, &b);

    for(i = a; i <= b; i++)
    {
        printf("%c ", i);
    }
}
