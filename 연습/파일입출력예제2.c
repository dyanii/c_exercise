/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp;
	char fname[100];
	int number;
	char name[20];
	float score;

	printf("���� ���� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", fname);

	if ((fp = fopen(fname, "w")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� ����\n", fname);
		exit(1);
	}

	while (1)
	{
		printf("�й�, �̸�, ������ �Է��Ͻÿ�(�����̸� ����): ");
		scanf("%d", &number);
		if (number < 0)
			break;
		scanf("%s %f", name, &score);
		fprintf(fp, "%d %s %f", number, name, score);
	}
	fclose(fp);
	return 0;
}
*/