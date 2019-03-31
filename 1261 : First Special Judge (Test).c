#include <stdio.h>

int main()
{
	int i, a;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		if(a % 5 == 0)
		{
			printf("%d", a);
			return 0;
		}
	}
	printf("0");
}
