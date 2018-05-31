#include <stdio.h>

float areaOfCircle(float number)
{
	float x;
	x = number * number * 3.14;
	printf("%f\n",x);
	return x;
}

int main()
{
	char input[4];
	float number;
	float number2;

	printf("What is your first number?\n");
	fgets(input, 4, stdin);
	sscanf(input, "%f", &number);

	printf("What is your second number?\n");
	fgets(input, 4, stdin);
	sscanf(input, "%f", &number2);

	for (int i = number; i <= number2; i++)
	{
		areaOfCircle(i);
	}
}
