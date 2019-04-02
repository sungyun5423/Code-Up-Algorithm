#include <stdio.h>

int main()
{
	int a[100], i, j, n;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(j = 0; j < 2; j++)
	{
		for(i = 0; i < n; i++)
		{
			printf("%d\n", a[i]);
		}
	}
}
