#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int evenorodd;
	printf("請輸入一個整數：");
	scanf("%d", &a);

	evenorodd = (a % 2);
	if (evenorodd == 0)
	{
		printf("%d為偶數", a);
	}
	if (evenorodd == 1)
	{
		printf("%d為奇數", a);
	}
	return 0;
}
