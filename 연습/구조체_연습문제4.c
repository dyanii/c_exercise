/*
#include <stdio.h>

struct complex {
	double real;
	double imag;
};
struct complex add(struct complex c1, struct complex s2);

int main(void)
{
	struct complex c1={1.000000,2.000000};
	struct complex c2={2.000000,3.000000};
	struct complex res;

	res = add(c1, c2);
	printf("%lf + %lfi\n", c1.real, c1.imag);
	printf("%lf + %lfi\n", c2.real, c2.imag);
	printf("%lf + %lfi\n", res.real, res.imag);

	return 0;
}

struct complex add(struct complex c1, struct complex c2)
{
	struct complex result;
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;
	return result;
}
*/