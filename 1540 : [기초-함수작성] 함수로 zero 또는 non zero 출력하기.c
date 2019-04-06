#include <stdio.h>

int n;



void f(int a)
{
	if(a == 0) printf("zero\n");
	else printf("non zero\n");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
