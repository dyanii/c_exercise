/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct movie {
	char title[100];
	double rating;
}MOVIE;

int main(void)
{
	MOVIE* m1;
	int size; int i;
	printf("�� ���̳� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &size);
	getchar();

	m1 = (MOVIE*)malloc(size * sizeof(MOVIE));

	if (m1 == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < size; i++)
	{
		printf("��ȭ ����: ");
		scanf("%s", m1[i].title);
		printf("��ȭ ����: ");
		scanf("%lf", &m1[i].rating);

	}

	printf("===============\n");
	printf("����: ����\n");
	printf("===============\n");
	for (i = 0; i < size; i++)
	{
		printf("%s %lf\n", m1[i].title, m1[i].rating);
	}
	printf("===============\n");
	free(m1);
	return 0;
}
*/