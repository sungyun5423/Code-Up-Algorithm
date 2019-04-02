#include <stdio.h>
 
int main()
{
    int i, j, a, arr[1000]={0};
 
    scanf("%d", &a);
 
    for(i = 0; i < a; i++)
        scanf("%d", &arr[i]);
 
    for(i = 0; i < a; i++)
    {
        for(j = i; j < i + a; j++)
        {
            printf("%d ", arr[j%(a)]);
        }
        printf("\n");
    }
}
