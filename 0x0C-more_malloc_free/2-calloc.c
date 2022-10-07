# include "main.h"
# include <stdlib.h>

/**
 * _calloc - allocate memmory for an array
 * @nmemb: number of member
 * @size: number of bytes
 * Return: pointer to newly allocated memory or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	pt = malloc(nmemb * size);
	if (!pt)
	{
		free(pt);
		return (NULL);
	}
   i = 0;
	while (i < (nmemb * size))
		*(pt + i++) = 0;
	return (pt);
}
