/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct movie {
	char title[100];
	double score;
}MOVIE;

int main(void)
{
	MOVIE* movie;
	int size, i;

	printf("�� ���̳� �����Ͻðڽ��ϱ�?");
	scanf("%d", &size);
	getchar();

	movie = (MOVIE*)malloc(size * sizeof(MOVIE));
	if (movie == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < size; i++)
	{
		printf("��ȭ ����: ");
		gets(movie[i].title, 100);
		printf("��ȭ ����: ");
		scanf("%lf", &movie[i].score);
		getchar();
	}

	printf("======================\n");
	printf("���� \t ���� \n");
	printf("======================\n");
	for (i = 0; i < size; i++)
	{
		printf("%s \t %f \n", movie[i].title, movie[i].score);
	}
	printf("\n======================\n");
	free(movie);
	return 0;
}
*/