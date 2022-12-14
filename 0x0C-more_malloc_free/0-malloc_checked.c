# include "main.h"
# include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: holds amount of bytes to allocate from heap
 * Return: pointer or exit null
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (!a)
		exit(98);
	return (a);
}
