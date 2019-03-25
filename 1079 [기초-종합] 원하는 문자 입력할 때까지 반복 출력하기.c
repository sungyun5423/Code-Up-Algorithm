#include <stdio.h>

int main()
{
    char a, good[2001];

    int i, count  = 0;
    while(a != 'q')
    {
        scanf("%c", &a);
        good[count] = a;
        if(a != ' ') count++;
    }
    for(i = 0; i < count; i++)
        printf("%c\n", good[i]);
}
