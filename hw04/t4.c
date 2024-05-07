#include <stdio.h>

int main(int argc, char **argv)
{
	int input, index;
	int max = 0xFFFFFFFF, min = 0x7FFFFFFF;
	
	for(index = 0; index < 5; index++)
	{
		scanf("%d", &input);
		if(input > max)
			max = input;
		if(input < min)
			min = input;
	}
	
	printf("%d", min + max);

	return 0;
}
