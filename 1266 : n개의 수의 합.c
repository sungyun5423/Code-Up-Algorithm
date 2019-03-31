#include <stdio.h>

int main()
{
	int a, i, sum = 0;
	int arr[1001] = { 0, };
	
	scanf("%d", &a);
	
	for(i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("%d", sum);
}
