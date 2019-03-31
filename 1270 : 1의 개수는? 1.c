#include <stdio.h>

int main()
{
	int a, i, sum = 0;
	
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++)
	{
		if(i % 10 == 1)
		{
			sum += 1;
		}
	}
	printf("%d", sum);
}
