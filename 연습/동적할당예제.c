/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("���� 2���� ������ ������ �ʿ�\n");
	int* list;
	list = (int*)malloc(2 * sizeof(int));
	int i;
	int* list_n;
	list[0] = 10;
	list[1] = 20;
	printf("���� 3���� ������ �������� Ȯ��\n");
	list_n = (int*)realloc(list,3 * sizeof(int));
	list_n[2] = 30;
	for (i = 0; i < 3; i++)
		printf("%d ", list_n[i]);
	printf("\n");
	return 0;
}
*/