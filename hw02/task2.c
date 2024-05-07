#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0x12345678;
	printf("%d\n", a);
	
	a = 0x1000000;
	printf("%d", a);
	return 0;
}
