# include "main.h"

/**
 * reverse_array - reverse an array of intergers
 * @a: array
 * @n: number of place to reverse
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp[1000];

	i = 0;
	j = n - 1;

	while (i < n)
	{
		*(tmp + i) = *(a + i);
		i++;
	}
	i = 0;
	while (i < n)
		*(a + i++) = *(tmp + j--);
}
