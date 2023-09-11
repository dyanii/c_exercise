/*
double get(int m[ROWS][COLS], int r)
{
	int* p, * endp;
	double sum = 0.0;

	p = &m[r][0];
	endp = &m[r][COLS-1];

	while (p <= endp)
		sum += *p++;

	sum /= COLS;
	return sum;
}

double tot(int m[ROWS][COLS])
{
	int* p, * endp;
	double sum = 0.0;

	p = &m[0][0];
	endp = &m[ROWS - 1][COLS - 1];

	while (p <= endp)
		sum += *p++;

	sum /= ROWS * COLS;
	return sum;
}
*/