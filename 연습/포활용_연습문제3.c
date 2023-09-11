/*
#include <stdio.h>
#include <stdlib.h>

double get_avg(int list[], int n);

int main(void)
{
	int scores[3][3] = { {10,20,30},
		{30,40,50},
		{50,60,70} };
	int i;
	double avg = 0;

	for (i = 0; i < 3; i++)
	{
		avg+= get_avg(scores, 3);
		printf("%dÇàÀÇ Æò±Õ°ª= %lf\n", i, avg);
	}
	return 0;
}

double get_avg(int list[], int n)
{
	int sum=0;
	int i;
	double avg;
	for (i = 0; i < 3; i++)
	{
		sum += list[i];
		avg = sum / 3;
	}

	return avg;
}
*/