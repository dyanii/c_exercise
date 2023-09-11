/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp1;
	FILE* fp2;
	char f1[50];
	char f2[50];
	char buf1[100], buf2[100];

	printf("첫번째 파일이름: ");
	scanf("%s", f1);
	printf("두번째 파일이름: ");
	scanf("%s", f2);

	if ((fp1 = fopen(f1, "r")) == NULL)
	{
		fprintf(stderr, "파일을 열 수 없음\n");
		exit(1);
	}
	if ((fp2 = fopen(f2, "r")) == NULL)
	{
		fprintf(stderr, "파일을 열 수 없음\n");
		exit(1);
	}

	while (1)
	{
		char* p1 = fgets(buf1, 100, fp1);
		char* p2 = fgets(buf2, 100, fp2);
		if (p1 == NULL || p2 == NULL)
			break;
		if (strcmp(buf1, buf2) != 0) {
			printf("<< %s \n", buf1);
			printf(">> %s", buf2);
		}
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}
*/