#include <stdio.h>
void alias(int&);
int main()
{
	int x=20;
	printf("before  alias: %d\n",x);
	alias(x);
	printf("New value is %d\n", x);
	return 0;
}
void alias(int &y)
{
	printf("enter new value: ");
	scanf("%d", &y);
}
