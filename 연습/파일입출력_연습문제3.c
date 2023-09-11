/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp1;
	FILE* fp2;
	char f1[30];
	char f2[30];
	char buffer[30];

	printf("원본 파일 이름: ");
	scanf("%s", f1);
	printf("복사 파일 이름: ");
	scanf("%s", f2);

	if ((fp1 = fopen(f1, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s을 열 수 없음\n", f1);
		exit(1);
	}
	if ((fp2 = fopen(f2, "w")) == NULL)
	{
		fprintf(stderr, "복사 파일 %s을 열 수 없음\n", f2);
		exit(1);
	}

	while (fgets(buffer, 30, fp1) != NULL)
		fputs(buffer, fp2);

	fclose(fp1);
	fclose(fp2);
	return 0;
}
*/