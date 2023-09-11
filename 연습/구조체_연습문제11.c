/*
#include <stdio.h>

struct dial {
	char name[20];
	char tel[20];
	char cel[20];
};

int main(void)
{
	struct dial d1[3];
	int i;
	char bro[30];
	struct dial* p;
	p = &d1;

	for (i = 0;i < 3; i++)
	{
		printf("이름을 입력하세요: ");
		scanf("%s", d1[i].name);
		printf("집전화번호를 입력: ");
		scanf("%s", d1[i].tel);
		printf("휴대폰번호를 입력: ");
		scanf("%s", d1[i].cel);
	}

	printf("검색할 이름을 입력하시오: ");
	scanf("%s", bro);

	for (i = 0; i < 3; i++)
	{
		if (strcmp(bro, d1[i]) == 0)
		{
			printf("집전화번호: %s\n", d1[i].tel);
			printf("휴대폰번호: %s\n", d1[i].cel);
		}
	}
	return 0;
}
*/