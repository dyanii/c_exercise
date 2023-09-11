/*
#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;
POINT translate(POINT p, POINT pd);

int main(void)
{
	POINT p, pd;
	POINT n;

	printf("한 점 P의 좌표를 입력: ");
	scanf("%d %d", &p.x, &p.y);

	printf("이동 좌료를 입력하시오: ");
	scanf("%d %d", &pd.x, &pd.y);

	n = translate(p, pd);
	printf("새로운 점 P'의 좌표는 (%d, %d)입니다.\n", n.x, n.y);

	return 0;
}

POINT translate(POINT p, POINT pd)
{
	POINT result;
	result.x = p.x + pd.x;
	result.y = p.y + pd.y;
	return result;
}
*/