/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    FILE* fp1;
    FILE* fp2;
    char n1[20];
    char n2[20];
    printf("ù��° �����̸�: ");
    scanf("%s", n1);
    fp1 = fopen(n1, "r");
    if (fp1 == NULL) {
        fprintf(stderr, "���� �ȿ���");
        exit(1);
    }
    printf("�ι�° �����̸�: ");
    scanf("%s", n2);
    fp2 = fopen(n2, "r");
    if (fp2 == NULL) {
        fprintf(stderr, "���� �ȿ���");
        exit(1);
    }

    while (1) {
        int c1 = fgetc(fp1);
        int c2 = fgetc(fp2);
        if (c1 == EOF && c2 == EOF)
            break;
        if (c1 != c2) {
            printf("�� ������ �ٸ�");
            fclose(fp1);
            fclose(fp2);
            return 0;
        }
    }
    printf("�� ������ ���� �����ϴ�.");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
*/