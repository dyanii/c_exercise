/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int st; int i;
	int* list;

	printf("�л��� ��: ");
	scanf("%d", &st);
	list = (int*)malloc(st * sizeof(int));

	if (list == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < st; i++)
	{
		printf("�л� #%d ����:", i+1);
		scanf("%d", &list[i]);
	}

	printf("======================\n");
	for (i = 0; i < st; i++)
	{
		printf("�л� #%d ����: %d \n", i + 1, list[i]);
	}
	printf("======================\n");

	free(list);
	return 0;
}
*/