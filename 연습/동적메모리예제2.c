/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000

int main(void)
{
	int* p = NULL;
	int i = 0;

	p = (int*)malloc(SIZE * sizeof(int));
	if (p == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	for (i = 0; i < SIZE; i++)
	{
		p[i] = rand();
	}

	int max = p[0];
	for (i = 0; i < SIZE; i++)
	{
		if (p[i] > max)
			max = p[i];
	}
	printf("�ִ밪=%d \n", max);
	free(p);

	return 0;
}
*/