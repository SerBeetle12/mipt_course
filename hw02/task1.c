#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 12345678;
	printf("%X\n", a);
	
	a = 1000000;
	printf("%X", a);
	return 0;
}

//Можно и вручную решить через деление и умножение, но в задании точно не указывалось каким методом делать.