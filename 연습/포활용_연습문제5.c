/*
#include <stdio.h>
#include <stdlib.h>

void set_max_ptr(int m[], int size, int** pmax);

int main(void)
{
	int m[6] = { 5,6,1,3,7,9 };
	int* pmax;

	set_max_ptr(m, 6, &pmax);
	return 0;
}
void set_max_ptr(int m[], int size, int** pmax)
{
	int i;
	pmax = m[0];
	for (i = 0; i < size; i++)
	{
		if (m[i] > pmax)
			pmax = m[i];
	}
	printf("���� ū ���� %d", pmax);
}
*/