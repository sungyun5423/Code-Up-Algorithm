#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    float avg = (float)sum / 3;
    printf("%d\n", sum);
    printf("%.1f\n", avg);
}
