/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int s; int i;
	int* list;

	printf("항목의 개수는 몇 개입니까? ");
	scanf("%d", &s);
	list = (int*)malloc(s * sizeof(int));

	for (i = 0; i < s; i++)
	{
		printf("항목<정수>을 입력하시오: ");
		scanf("%d", &list[i]);

	}
	printf("\n입력된 값은 다음과 같습니다.\n");
	for (i = 0; i < s; i++)
		printf("%d ", list[i]);
	printf("\n");
	free(list);

	return 0;
}
*/