/*
#include <stdio.h>

struct point {
	int x;
	int y;
};
typedef struct circle {
	struct point cen;
	double rad;
}CIR;

double area(CIR c);
double perimeter(CIR c);

int main(void)
{
	CIR c1;
	double area1;
	double per;

	printf("���� �߽���: ");
	scanf("%d %d", &c1.cen.x, &c1.cen.y);

	printf("���� ������: ");
	scanf("%lf", &c1.rad);

	area1 = area(c1);
	per = perimeter(c1);

	printf("���� ����= %lf, ���� �ѷ�= %lf", area1, per);

	return 0;
}

double area(CIR c)
{
	double a;
	a = 3.14 * (c.rad) * (c.rad);
	return a;
}

double perimeter(CIR c)
{
	double p;
	p = 2 * 3.14 * c.rad;
	return p;
}
*/