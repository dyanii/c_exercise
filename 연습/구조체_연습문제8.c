/*
#include <stdio.h>

struct point {
	int x;
	int y;
};
struct circle {
	struct point cen;
	double rad;
};

double area(struct circle c);
double perimeter(struct circle c);

int main(void)
{
	struct circle c1;
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

double area(struct circle c)
{
	double a;
	a = 3.14 * (c.rad) * (c.rad);
	return a;
}

double perimeter(struct circle c)
{
	double p;
	p = 2 * 3.14 * c.rad;
	return p;
}
*/