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
		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", d1[i].name);
		printf("����ȭ��ȣ�� �Է�: ");
		scanf("%s", d1[i].tel);
		printf("�޴�����ȣ�� �Է�: ");
		scanf("%s", d1[i].cel);
	}

	printf("�˻��� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", bro);

	for (i = 0; i < 3; i++)
	{
		if (strcmp(bro, d1[i]) == 0)
		{
			printf("����ȭ��ȣ: %s\n", d1[i].tel);
			printf("�޴�����ȣ: %s\n", d1[i].cel);
		}
	}
	return 0;
}
*/