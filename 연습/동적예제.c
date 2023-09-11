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
	printf("몇 편이나 저장하시겠습니까? ");
	scanf("%d", &size);
	getchar();

	m1 = (MOVIE*)malloc(size * sizeof(MOVIE));

	if (m1 == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < size; i++)
	{
		printf("영화 제목: ");
		scanf("%s", m1[i].title);
		printf("영화 평점: ");
		scanf("%lf", &m1[i].rating);

	}

	printf("===============\n");
	printf("제목: 평점\n");
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