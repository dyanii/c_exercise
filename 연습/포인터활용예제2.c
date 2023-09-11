/*
#include <stdio.h>

double f(double k);
double formula(double (*pf)(double), int n);

int main(void)
{
	int n;

	printf("정수 n을 입력하시오: ");
	scanf("%d", &n);
	printf("%lf\n", formula(f, n));

	return 0;
}

double f(double k)
{
	return 1.0 / k;
}

double formula(double(*pf)(double), int n)
{
	int i;
	double res=0.0;
	for (i = 1; i <= n; i++)
		res += pf(i) * pf(i) + pf(i) + 1;
	return res;
}
*/