#include <stdio.h>

void f()
{
	int i;
	for(i = 0; i < 2; i++)
		printf("%c", '*');
	return;
}
int main()
{
    f();
    return 0;
}
