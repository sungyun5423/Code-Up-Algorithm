#include <stdio.h>

int main()
{
	int i, a, b;
	
	scanf("%d %d", &a, &b);
	
	while(a <= b)
	{
		for(i = 1; i < 10; i++)
		{
			printf("%d*%d=%d\n", a, i, a * i);
		}
		a++;
	}
}
