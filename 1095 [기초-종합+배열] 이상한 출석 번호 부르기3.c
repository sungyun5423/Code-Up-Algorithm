#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    int min = INT_MAX;

    int a[1000]={};
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if(min > a[i])
            min = a[i];
    }
        printf("%d ", min);
}
