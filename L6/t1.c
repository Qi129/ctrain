#include <stdio.h>
int main()
{
	float w = 0.0;
	float h = 0.0;
	while (scanf("%f %f",&w,&h) != EOF)
	{
		float bmi = w / (h * h / 10000);
		if (bmi < 18.5)
		{
			printf("Underweight\n");
		}
		else if (bmi >= 18.5 && bmi <= 23.9)
		{
			printf("Normal\n");
		}
		else if (bmi > 23.9 && bmi <= 27.9)
		{
			printf("Overweight\n");
		}
		else
		{
			printf("Obese\n");
		}
	}
	return 0;
}
