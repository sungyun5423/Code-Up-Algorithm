#include <stdio.h>
#include <limits.h>

int main()
{
    int i, a, b;
    int min = INT_MAX;
    int max = INT_MIN;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }

    for(i = min; min <= max; min++)
    {
        printf("%d ", min);
    }
}
