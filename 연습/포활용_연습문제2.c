/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int get_sum(int array[], int size);

int main(void)
{
	int m[3][6] = { {10,10,10,10,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10} };
	int i, sum = 0;

	for (i = 0; i < 3; i++)
		sum += get_sum(m[i], sizeof(m[i]) / sizeof(m[i][0]));
	printf("정수의 합: %d \n", sum);

	return 0;
}


int get_sum(int array[], int size)
{
	int sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;

}
*/