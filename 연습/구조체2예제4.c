/*
#include <stdio.h>

struct student {
	int number;
	char name[30];
	double grade;
};

struct student list[3];
struct student get_max_stu(struct student list[]);

int main(void)
{
	struct student s;
	int i;

	printf("�л��� ������ �Է��ϼ���.\n");
	for (i = 0; i < 3; i++)
	{
		printf("[�л� %d]\n", i + 1);
		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", list[i].name);
		printf("�й��� �Է��ϼ���: ");
		scanf("%d", &list[i].number);
		printf("������ �Է��ϼ���: ");
		scanf("%lf", &list[i].grade);
		printf("\n");
	}

	s = get_max_stu(list);

	printf("<������ ���� ���� �л�>\n");
	printf("�̸�: %s\n", s.name);
	printf("�й�: %d\n", s.number);
	printf("����: %lf\n", s.grade);

	return 0;
}

struct student get_max_stu(struct student list[])
{
	struct student s;
	int i;

	s = list[0];
	for (i = 0; i < 3; i++)
	{
		if (list[i].grade > s.grade)
			s = list[i];
	}
	return s;
}
*/