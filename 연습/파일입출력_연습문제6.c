/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* fp = NULL;
	int c, count = 0;
	char f1[100];

	printf("���� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", f1);

	if ((fp = fopen(f1, "r")) == NULL)
	{
		fprintf(stderr, "���� ������ �� �� ����\n");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF) {
		if (isprint(c))
			count++;
	}
	fclose(fp);
	printf("������ ������ %d\n", count);

	return 0;
}
*/