
#include <stdio.h>

double get_row(int m[3][4], int r);
double get_total(int m[3][4]);


int main(void)
{
	int m[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	double res1;
	double res2;

	res1 = get_row(m, 2);
	res2 = get_total(m);

	printf("ÇàÀÇÆò±Õ=%lf\n", res1);
	printf("ÀüÃ¼Æò±Õ=%lf", res2);

	return 0;

}
double get_row(int m[3][4], int r) {
	int* p, * endp;
	double sum = 0.0;

	p = &m[r][0];
	endp = &m[r][3];

	while (p <= endp)
		sum += *p++;
	sum /= 4;
	return sum;
}
double get_total(int m[4][3]) {
	int* p, * endp;
	double sum = 0.0;

	p = &m[0][0];
	endp = &m[3][2];

	while (p <= endp)
		sum += *p++;

	sum /= 3 * 4;
	return sum;
}