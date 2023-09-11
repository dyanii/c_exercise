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
	printf("0. µ¡¼À\n");
	printf("1. »¬¼À\n");
	printf("2. °ö¼À\n");
	printf("3. ³ª´°¼À\n");
	printf("4. Á¾·á\n");
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
		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ½Ã¿À: ");
		scanf("%d", &me);

		if (me < 0 || me >= 4)
			break;
		printf("µÎ°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
		scanf("%d %d", &x, &y);

		res = pf[me](x, y);
		printf("¿¬»ê °á°ú = %d\n", res);
	}

	return 0;
}
*/