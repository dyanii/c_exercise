/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void set_pro(char** q, int n);

int main(void)
{
	int m;
	char* s;

	printf("몇번째 속담을 선택하시겠습니까? ");
	scanf("%d", &m);

	set_pro(&s, m);
	printf("selected proverb = %s", s);

	return 0;
}

void set_pro(char** q, int n)
{
	static char* ary[10] = { "ABC","DEF","GHI","JKL","MNO","PQR","STU","VWX","YZA","123" };
	*q = ary[n - 1];
}
*/