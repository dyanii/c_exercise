/*
#include <stdio.h>

int main(void)
{
	FILE* fp1;
	FILE* fp2;
	char fn1[30];
	char fn2[30];

	printf("첫번째파일이름: ");
	gets_s(fn1, 30);
	printf("두번째파일이름: ");
	gets_s(fn2, 30);

	if ((fp1=fopen(fn1,"r")) == NULL)
	{
		fprintf(stderr, "파일 열 수 없음\n");
		exit(1);
	}
	if ((fp2=fopen(fn2, "w")) == NULL)
	{
		fprintf(stderr, "파일 열 수 없음\n");
		exit(1);
	}

	while (feof(fp1)==0)
	{
		fputc(toupper(fgetc(fp1)), fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}
*/