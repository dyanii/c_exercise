/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define EPS 0.0001

double func(double x)
{
	return x * x * x - x * x + 2;
}
void bisec(double a, double b);

int main(void)
{
	double a = -200, b = 200;
	bisec(a, b);
	return 0;
}

void bisec(double a, double b)
{
	double c;
	if (func(a) * func(b) >= 0)
	{
		printf("적절한 값이 아님\n");
		return;
	}
	while ((b - a) >= EPS)
	{
		c = (a + b) / 2;
		if (func(c) * func(a) < 0)
		{
			b = c;
		}
		else
		{
			a = c;
		}
	}
	printf("최종 근=%lf\n", c);
}
*/