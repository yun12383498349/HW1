#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0;
	int c = 0;
	printf("�п�J��Ӿ�ơG");
	scanf("%d%d", &a, &b);
	c = a % b;
	if (c == 0)
	{
		printf("%d�O%d������", a, b);
	}
	else
	{
		printf("%d���O%d������", a, b);
	}

	return 0;
}
