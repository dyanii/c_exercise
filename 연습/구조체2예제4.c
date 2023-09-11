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

	printf("학생의 정보를 입력하세요.\n");
	for (i = 0; i < 3; i++)
	{
		printf("[학생 %d]\n", i + 1);
		printf("이름을 입력하세요: ");
		scanf("%s", list[i].name);
		printf("학번을 입력하세요: ");
		scanf("%d", &list[i].number);
		printf("평점을 입력하세요: ");
		scanf("%lf", &list[i].grade);
		printf("\n");
	}

	s = get_max_stu(list);

	printf("<평점이 가장 높은 학생>\n");
	printf("이름: %s\n", s.name);
	printf("학번: %d\n", s.number);
	printf("평점: %lf\n", s.grade);

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