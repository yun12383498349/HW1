#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0;
	int max = 0, min = 0;

	printf("�п�J�T�Ӿ�ơG");
	scanf("%d%d%d", &a, &b, &c);
	//a max
	if (a > b&&a > c)
	{
		max = a;
		if (b > c)
		{
			min = c;
		}
		else
		{
			min = b;
		}
	}
	//b max
	if (b > a&&b > c)
	{
		max = b;
		if (a > c)
		{
			min = c;
		}
		else
		{
			min = a;
		}
	}
	//c max
	if (c > a&&c > b)
	{
		max = c;
		if (a > b)
		{
			min = b;
		}
		else
		{
			min = a;
		}
	}

	printf("�̤j�ȡG%d\n", max);
	printf("�̤p�ȡG%d\n", min);
	return 0;
}
