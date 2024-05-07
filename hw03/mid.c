#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	float result;
	scanf("%d %d %d", &a, &b, &c);
	result = (float)(a + b + c)/3.0f;
	printf("%.2f", result);
	return 0;
}
