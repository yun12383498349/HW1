#include <stdio.h>
#include <stdlib.h>

int main()
{
	double h = 0, w = 0;
	double BMI = 0;

	printf("請輸入身高(cm)：");
	scanf("%lf", &h);
	printf("請輸入體重(kg)：");
	scanf("%lf", &w);

	BMI = w / ((h / 100)*(h / 100));
	printf("你的BMI為%lf\n", BMI);

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
