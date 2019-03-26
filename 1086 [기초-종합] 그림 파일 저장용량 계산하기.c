#include <stdio.h>

int main()
{
    int a, b, c;
    double result;

    scanf("%d %d %d", &a, &b, &c);

    result = a * b * c / 8;
    result = result / 1024;
    result = result / 1024;

    printf("%.2f MB", result);
}
