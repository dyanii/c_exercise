/*
#include <stdio.h>

struct shape {
	int type;
	union {
		struct { int base, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }cir;
	}data;
};


int main(void)
{
	struct shape s;
	int tot;

	printf("도형의 타입을 입력하시오(0, 1, 2): ");
	scanf("%d", &s.type);

	switch (s.type)
	{
	case 0:
		printf("밑변과 높이의 길이를 입력하시오: ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		tot = s.data.tri.base * s.data.tri.height;
		printf("면적은 %d", tot);
		break;
	case 1:
		printf("가로와 세로의 길이를 입력하시오: ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		tot = s.data.rect.width * s.data.rect.height;
		printf("면적은 %d", tot);
		break;
	case 2:
		printf("반지름을 입력하시오: ");
		scanf("%d", &s.data.cir.radius);
		tot = 3.14 * s.data.cir.radius * s.data.cir.radius;
		printf("면적은 %d", tot);
		break;
	}

	return 0;
}
*/