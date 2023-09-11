/*
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1;
	struct point p2;
	struct point* s1;
	struct point* s2;
	s1 = &p1;
	s2 = &p2;

	int res;
	

	printf("첫번째 좌표 입력: ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("두번째 좌표 입력: ");
	scanf("%d %d", &p2.x, &p2.y);

	res = equal(s1, s2);
	if (res == 1)
		printf("(%d, %d)==(%d, %d)", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d, %d)!=(%d, %d)", p1.x, p1.y, p2.x, p2.y);

	return 0;
}

int equal(struct point*p1, struct point*p2)
{
	if ((p1->x  == p2->x ) && (p1->y  == p2->y ))
		return 1;
	else
		return 0;
}
*/