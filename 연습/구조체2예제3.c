/*
#include <stdio.h>

struct student {
	int number;
	char name[30];
	double grade;
};

struct student list[] = {
	{20210001, "À±¿µ¾Æ", 4.5},
	{20210002, "À±·ê·ç", 3.0},
	{20210003, "À±¶ö¶ó", 2.0}
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
	printf("<ÆòÁ¡ÀÌ °¡Àå ³ôÀº ÇĞ»ı>\n");
	printf("ÀÌ¸§: %s\n", s.name);
	printf("ÇĞ¹ø: %d\n", s.number);
	printf("ÆòÁ¡: %lf\n", s.grade);

	return 0;
}
*/