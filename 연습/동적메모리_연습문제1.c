/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i, num;
	int* p;

	printf("������ ����: ");
	scanf("%d", &num);
	p = (int*)malloc(num * sizeof(int));

	if (p == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < num; i++)
	{
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &p[i]);
	}

	int sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += p[i];
	}
	printf("���� %d�Դϴ�.", sum);

	return 0;
	
}
*/