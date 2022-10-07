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
	void *pt;

	if (!nmemb || !size)
		return (NULL);
	pt = malloc(nmemb * size);
	if (!pt)
	{
		free(pt);
		return (NULL);
	}
	return (pt);
}
