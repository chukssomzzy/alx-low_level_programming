# include "main.h"
# include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to a 2d matrix
 * @size: size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, n, m;

	n = 0;
	m = 0;
	j = 0;
	for (i = 0; i < size; i++)
	{
		n += a[i];
		a += size;
	}
	a -= size;
	for (j = 0; j < size; j++)
	{
		m += a[j];
		a -= size;
	}

	printf("%d, %d\n", n, m);
}
