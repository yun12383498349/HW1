#include <stdio.h>
#include <stdlib.h>

int main()
{
	int miles = 0, gasoline = 0, gasolinemoney = 0, parkingfees = 0, tolls = 0;
	int total = 0;
	printf("Total miles driven per day:");
	scanf("%d", &miles);
	printf("Cost per gallon of gasoline:");
	scanf("%d", &gasolinemoney);
	printf("Average milesper gallon:");
	scanf("%d", &gasoline);
	printf("Parking fees per day:");
	scanf("%d", &parkingfees);
	printf("Tolls per day:");
	scanf("%d", &tolls);

	total = ((miles / gasoline)*gasolinemoney) + parkingfees + tolls;
	printf("Total per day:%d", total);
	return 0;
}
