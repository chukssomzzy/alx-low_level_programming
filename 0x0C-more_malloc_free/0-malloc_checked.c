# include "main.h"
# include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: holds amount of bytes to allocate from heap
 */

void *malloc_checked(unsigned int b)
{
	char *a;
	a = malloc(b);
	if (a)
		return (a);
	exit (98);
}
