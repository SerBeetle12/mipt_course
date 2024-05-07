#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d;
	scanf("%d", &d);
	a = d/100;
	b = d/10%10;
	c = d%10;
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
