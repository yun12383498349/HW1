#include <stdio.h>
#include <stdlib.h>

int main()
{
	double h = 0, w = 0;
	double BMI = 0;

	printf("�п�J����(cm)�G");
	scanf("%lf", &h);
	printf("�п�J�魫(kg)�G");
	scanf("%lf", &w);

	BMI = w / ((h / 100)*(h / 100));
	printf("�A��BMI��%lf\n", BMI);

	if (BMI < 18.5) {
		printf("Underweight\n");
	}
	if (BMI >= 18.5&&BMI <= 24.9) {
		printf("Normal\n");
	}
	if (BMI >= 25 && BMI <= 29.9) {
		printf("Overweight\n");
	}
	if (BMI >= 30) {
		printf("Obese\n");
	}

	return 0;
}
