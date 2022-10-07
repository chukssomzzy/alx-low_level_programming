# include "main.h"
# include <stdlib.h>

/**
 * array_range - create an array containing range of int
 * @min: minmum int
 * @max: maximum int
 * Return: pointer containing range of int or null
 */

int *array_range(int min, int max)
{
	int *pt, diff, i;

	diff = max - min;
	if (diff < 0)
		return (NULL);
	pt = malloc(sizeof(*pt) * (diff + 1));
	if (!pt)
	{
		free(pt);
		return (NULL);
	}
	for (i = 0; i <= diff; i++)
		*(pt + i) = min + i;
	return (pt);
}
