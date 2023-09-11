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

	printf("몇 편이나 저장하시겠습니까?");
	scanf("%d", &size);
	getchar();

	movie = (MOVIE*)malloc(size * sizeof(MOVIE));
	if (movie == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < size; i++)
	{
		printf("영화 제목: ");
		gets(movie[i].title, 100);
		printf("영화 평점: ");
		scanf("%lf", &movie[i].score);
		getchar();
	}

	printf("======================\n");
	printf("제목 \t 평점 \n");
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