#include <stdio.h>

int main()
{
	int i, a, sum = 0;
	
	scanf("%d", &a);
	
	for(i = 0; i <= a; i++)
		sum += i;
		
	printf("%d", sum);
}
