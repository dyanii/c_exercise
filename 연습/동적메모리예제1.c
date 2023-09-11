/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int st; int i;
	int* list;

	printf("학생의 수: ");
	scanf("%d", &st);
	list = (int*)malloc(st * sizeof(int));

	if (list == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < st; i++)
	{
		printf("학생 #%d 성적:", i+1);
		scanf("%d", &list[i]);
	}

	printf("======================\n");
	for (i = 0; i < st; i++)
	{
		printf("학생 #%d 성적: %d \n", i + 1, list[i]);
	}
	printf("======================\n");

	free(list);
	return 0;
}
*/