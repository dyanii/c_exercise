/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* fp = NULL;
	int c, count = 0;
	char f1[100];

	printf("파일 이름을 입력하시오: ");
	scanf("%s", f1);

	if ((fp = fopen(f1, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일을 열 수 없음\n");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF) {
		if (isprint(c))
			count++;
	}
	fclose(fp);
	printf("문자의 개수는 %d\n", count);

	return 0;
}
*/