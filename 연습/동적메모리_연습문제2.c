/* �ȵ��ư�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i, n;
	char** A;
	printf("���ڿ��� ����: ");
	scanf("%d", &n);

	if ((A =(char**)malloc(n * sizeof(char*))) != NULL) {
		for (i = 0; i < n; i++)
			A[i] = (char*)malloc(100);
	}

	printf("[");
	for (i = 0; i < n; i++) {
		printf(" \" ");
		printf("���ڿ�%s", A[i]);
		printf(" \" ");
	}
	printf("]");

	free(A);
	return 0;
}
*/