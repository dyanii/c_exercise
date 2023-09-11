/*
#include <stdio.h>
#include <stdlib.h>
void qsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*));

int values[] = { 98,23,99,37,16 };

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main()
{
	int n;

	qsort(values, 5, sizeof, compare(a,b));

	printf("정렬한 후 배열: ");
	for (n = 0; n < 5; n++)
		printf("%d", values[n]);
	printf("\n");

	return (0);
}

void qsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*))
{
	int a, b;
	int res = 0;
	
	if (a < b)
		res = (-1) * compare(a, b);
	else if (a == b)
		res = 0;
	else
		res = compare(a, b);

		
}
*/