﻿/* 안돌아감
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp; char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	printf("성적 파일 이름을 입력하시오: ");
	scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.₩n", fname);
		exit(1);
	}
	while (!feof(fp))
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		total += score;
		count++;
	}
	printf("평균 = %f₩n", total / count);
	fclose(fp);
	return 0;
}
*/