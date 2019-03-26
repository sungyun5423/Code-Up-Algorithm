#include <stdio.h>

int main()
{
    int n, i;
    int a[1000]={};
    scanf("%d", &n);    // 개수 입력 받기
    for(i = 1; i <= n; i++) // 개수 만큼 입력받기
        scanf("%d", &a[i]); // 읽어서 순서대로 배열에 넣는다

    for(i = n; i >= 1; i--)
        printf("%d ", a[i]);    // i번 배열에 저장되어있는 값 출력하기
}
