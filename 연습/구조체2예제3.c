/*
#include <stdio.h>

struct student {
	int number;
	char name[30];
	double grade;
};

struct student list[] = {
	{20210001, "������", 4.5},
	{20210002, "�����", 3.0},
	{20210003, "������", 2.0}
};

int main(void)
{
	struct student s;
	int i;

	s = list[0];
	for (i = 0; i < 3; i++)
	{
		if (list[i].grade > s.grade)
			s = list[i];
	}
	printf("<������ ���� ���� �л�>\n");
	printf("�̸�: %s\n", s.name);
	printf("�й�: %d\n", s.number);
	printf("����: %lf\n", s.grade);

	return 0;
}
*/