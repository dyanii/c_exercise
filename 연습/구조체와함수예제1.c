/*
#include <stdio.h>

struct vector {
	float x;
	float y;
};
struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
	struct vector v1, v2;
	struct vector hap;

	printf("첫 번째 벡터를 입력하세요: ");
	scanf("%f %f", &v1.x, &v1.y);

	printf("두 번째 벡터를 입력하세요: ");
	scanf("%f %f", &v2.x, &v2.y);

	hap = get_vector_sum(v1, v2);
	printf("벡터의 합은 (%f, %f)입니다.\n", hap.x, hap.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}
*/