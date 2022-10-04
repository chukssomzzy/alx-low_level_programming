# include "main.h"
# include <stdlib.h>


/**
 * **alloc_grid - makes a 2d array of 0
 * @w: width of array or column
 * @h: height of array or row
 * Return: a pointer to the array
 */

int **alloc_grid(int h, int w)
{
	int **a, i, j;

	if (h <= 0 || w <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * h);
	if (!a)
	{
		free(a);
		return (NULL);
	}
	i = 0;
	while (i < h)
	{
		a[i] = malloc(sizeof(int) * w);
		if (!a[i])
		{
			while (i >= 0)
				free(a[i--]);
			free(a);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			a[i][j] = 0;
	return (a);
}
