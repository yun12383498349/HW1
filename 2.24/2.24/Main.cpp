#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int evenorodd;
	printf("�п�J�@�Ӿ�ơG");
	scanf("%d", &a);

	evenorodd = (a % 2);
	if (evenorodd == 0)
	{
		printf("%d������", a);
	}
	if (evenorodd == 1)
	{
		printf("%d���_��", a);
	}
	return 0;
}
