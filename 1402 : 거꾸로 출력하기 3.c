#include <stdio.h>

int main()
{
	int i, a[1000], n;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = n; i > 0; i--)
	{
		printf("%d ", a[i]);
	}
}
