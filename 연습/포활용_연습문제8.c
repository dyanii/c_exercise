/*
#include <stdio.h>
#include <stdlib.h>

void array_copy(int src[3][3], int dst[3][3]);

int main(void) {
	int po[3][3] = {
		{100,50,60},
		{34,73,58},
		{16,35,94}
	};
	int op[3][3];
	int i, k;

	printf("<원본 2차원 배열>\n");
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 3; k++)
			printf("%d ", po[i][k]);
		printf("\n");
	}
	printf("<복사본 2차원 배열>\n");
	array_copy(po, op);

	return 0;
}

void array_copy(int src[3][3], int dst[3][3]) {
	int a, b;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
			printf("%d ", src[a][b]);
		printf("\n");
	}

	int* p = &src[0][0];
	int* last = &src[2][2];
	int* q = &dst[0][0];
	while (p <= last) {
		*q++ = *p++;
	}
}
*/