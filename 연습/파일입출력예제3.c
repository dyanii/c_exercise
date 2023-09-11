/* 메모장에서 결과 확인
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	fp = fopen("data.txt", "w");

	if (fp == NULL)
	{
		printf("data.txt 파일을 열 수 없음");
		exit(1);
	}

	fputs("This is an house.", fp);

	fseek(fp, 11, SEEK_SET);
	fputs("apple", fp);

	fclose(fp);

	return 0;
}
*/