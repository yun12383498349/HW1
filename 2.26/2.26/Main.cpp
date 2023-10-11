#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0;
	int c = 0;
	printf("請輸入兩個整數：");
	scanf("%d%d", &a, &b);
	c = a % b;
	if (c == 0)
	{
		printf("%d是%d的倍數", a, b);
	}
	else
	{
		printf("%d不是%d的倍數", a, b);
	}

	return 0;
}
