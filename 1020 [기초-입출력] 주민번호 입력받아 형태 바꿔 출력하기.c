#include <stdio.h>

int main()
{
    int a, b;
    scanf("%06d-%07d", &a, &b);
    printf("%06d%07d", a, b);
}
