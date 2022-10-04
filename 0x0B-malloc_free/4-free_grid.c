# include "main.h"
# include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @g: 2d array
 * @h: height of array
 */


void free_grid(int **g, int h)
{
	while (--h >= 0)
		free(*(g + h));
	free(g);
}
