#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	//
	printf("*********\n");
	for (i = 0; i <= 6; i++)
	{
		printf("*       *\n");
	}
	printf("*********\n\n");
	//
	printf("   ***   \n");
	printf(" *     * \n");
	for (i = 0; i <= 4; i++)
	{
		printf("*       *\n");
	}
	printf(" *     * \n");
	printf("   ***   \n\n");
	//
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	for (i = 0; i <= 5; i++)
	{
		printf("  *  \n");
	}
	//
	printf("    *    \n");
	printf("   * *   \n");
	printf("  *   *  \n");
	printf(" *     * \n");
	printf("*       *\n");
	printf(" *     * \n");
	printf("  *   *  \n");
	printf("   * *   \n");
	printf("    *    \n");
	return 0;
}
