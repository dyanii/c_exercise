/*
#include <stdio.h>
#include <stdlib.h>

typedef struct per {
	int addr;
	char name[30];
	char cel[30];
}PER;

int main(void) {
	PER *p1;
	int i; int num;

	printf("�ּ��� ����: ");
	scanf("%d", &num);

	p1 = (int*)malloc(num * sizeof(int));

	for (i = 0; i < num; i++)
	{
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", p1[i].name);
		printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
		scanf("%s", p1[i].cel);
	}


	printf("======================\n");
	printf("�̸� \t �޴��� ��ȣ\n");
	for (i = 0; i < num; i++)
	{
		printf("%s %s \n", p1[i].name, p1[i].cel);

	}
	printf("======================\n");
	return 0;
}
*/