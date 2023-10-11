#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number = 0, square = 0, cube = 0;
	int i = 0;
	printf("number\tsquare\tcube\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}

	return 0;
}
