/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	char fname[128];
	char buffer[256];
	char word[256];
	int line = 0;

	printf("입력 파일 이름을 입력하시오: ");
	scanf("%s", fname);

	printf("탐색할 단어를 입력하시오: ");
	scanf("%s", word);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s을 열 수 없음\n", fname);
		exit(1);
	}
	while (fgets(buffer, 256, fp))
	{
		line++;
		if (strstr(buffer, word))
		{
			printf("%s: %d번째 줄에서 단어 %s이 발견됨\n", fname, line, word);
		}
	}
	fclose(fp);

	return 0;
}
*/