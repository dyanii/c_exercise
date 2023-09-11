/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i, num;
	int* p;

	printf("정수의 개수: ");
	scanf("%d", &num);
	p = (int*)malloc(num * sizeof(int));

	if (p == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < num; i++)
	{
		printf("양의 정수를 입력하시오: ");
		scanf("%d", &p[i]);
	}

	int sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += p[i];
	}
	printf("합은 %d입니다.", sum);

	return 0;
	
}
*/