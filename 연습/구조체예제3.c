/*
#include <stdio.h>

struct student {
	int number;
	char name[30];
	double grade;
};

int main(void)
{
	int i;
	struct student list[3];

	for (i = 0; i < 3; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);

		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);

		printf("학점을 입력하시오: ");
		scanf("%lf", &list[i].grade);

		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("학번: %d, 이름: %s, 학점: %lf\n", list[i].number, list[i].name, list[i].grade);
	}
	return 0;

}
*/