/*
#include <stdio.h>
#include <stdlib.h>

char* get_word() {
	char* s = (char*)malloc(50);
	if (s == NULL) {
		printf("�޸� �Ҵ� ���� \n");
		exit(1);
	}
	printf("�ܾ �Է��Ͻÿ�(�ִ� 50����): ");
	scanf("%s", s);
	return s;
}

int main(void)
{
	char* p;
	p = get_word();
	printf("���� �޸𸮿� ����� �ܾ�� %s�Դϴ�.", p);

	free(p);
	return 0;
}
*/