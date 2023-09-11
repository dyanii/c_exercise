/*
#include <stdio.h>
#include <stdlib.h>

typedef struct per {
	int addr;
	char name[30];
	char cel[30];
}PER;

int main(void) {
	PER *p1;
	int i; int num;

	printf("주소의 개수: ");
	scanf("%d", &num);

	p1 = (int*)malloc(num * sizeof(int));

	for (i = 0; i < num; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", p1[i].name);
		printf("휴대폰 번호를 입력하시오: ");
		scanf("%s", p1[i].cel);
	}


	printf("======================\n");
	printf("이름 \t 휴대폰 번호\n");
	for (i = 0; i < num; i++)
	{
		printf("%s %s \n", p1[i].name, p1[i].cel);

	}
	printf("======================\n");
	return 0;
}
*/