#include <stdio.h>

int main()
{
	int i, j, k, n;
	
	scanf("%d", &n);
	
	for(i = 1; i <= (n-(n/2)); i++)
	{
		for(j = 1; j <= ((n-(n/2))-i); j++)
		{
			printf(" ");
		}
		for(k = 1; k <=((i*2)-1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
