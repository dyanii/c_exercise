/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

	unsigned char image[10][10];
	srand((unsigned)time(NULL));

	int a, b;
	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			image[a][b] = rand() % 256;
			if (image[a][b] < 128) {
				image[a][b] = 0;
				printf("%d ", image[a][b]);
			}
			else {
				image[a][b] = 255;
				printf("%d ", image[a][b]);
			}
		}

		printf("\n");
	}

	return 0;
}
*/