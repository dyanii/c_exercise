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

	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2): ");
	scanf("%d", &s.type);

	switch (s.type)
	{
	case 0:
		printf("�غ��� ������ ���̸� �Է��Ͻÿ�: ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		tot = s.data.tri.base * s.data.tri.height;
		printf("������ %d", tot);
		break;
	case 1:
		printf("���ο� ������ ���̸� �Է��Ͻÿ�: ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		tot = s.data.rect.width * s.data.rect.height;
		printf("������ %d", tot);
		break;
	case 2:
		printf("�������� �Է��Ͻÿ�: ");
		scanf("%d", &s.data.cir.radius);
		tot = 3.14 * s.data.cir.radius * s.data.cir.radius;
		printf("������ %d", tot);
		break;
	}

	return 0;
}
*/