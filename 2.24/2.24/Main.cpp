#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int evenorodd;
	printf("叫块俱计");
	scanf("%d", &a);

	evenorodd = (a % 2);
	if (evenorodd == 0)
	{
		printf("%d案计", a);
	}
	if (evenorodd == 1)
	{
		printf("%d计", a);
	}
	return 0;
}
