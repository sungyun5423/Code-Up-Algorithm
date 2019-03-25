#include <stdio.h>

int main()
{
    char a, i;

    scanf("%c", &a);

    for(i = 'a'; i <= a; i++)
    {
        printf("%c ", i);
    }
}
