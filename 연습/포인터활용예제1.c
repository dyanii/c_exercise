/*
#include <stdio.h>

void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void)
{
	printf("=================\n");
	printf("0. ����\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ������\n");
	printf("4. ����\n");
	printf("=================\n");
}

int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}

int main(void)
{
	int x, y, res, me;
	int(*pf[4])(int, int) = { add,sub,mul,div };

	while (1) {
		menu();
		printf("�޴��� �����Ͻÿ�: ");
		scanf("%d", &me);

		if (me < 0 || me >= 4)
			break;
		printf("�ΰ��� ������ �Է��Ͻÿ�: ");
		scanf("%d %d", &x, &y);

		res = pf[me](x, y);
		printf("���� ��� = %d\n", res);
	}

	return 0;
}
*/