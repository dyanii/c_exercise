/*
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p;
	int res;

	printf("���� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &p.x, &p.y);

	res = quadrant(p);

	printf("(%d, %d)�� ��и� = %d", p.x, p.y, res);

	return 0;
}

int quadrant(struct point p)
{
	if ((p.x > 0) && (p.y > 0))
		return 1;
	else if ((p.x < 0) && (p.y > 0))
		return 2;
	else if ((p.x < 0) && (p.y < 0))
		return 3;
	else if ((p.x > 0) && (p.y < 0))
		return 4;
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");

}
*/