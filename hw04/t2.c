#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a > b && a > c)
	{
		printf("%d", a);
		return 0;
	}
	if(b > a && b > c)
	{
		printf("%d", b);
		return 0;
	}
	printf("%d", c);
	return 0;
}
