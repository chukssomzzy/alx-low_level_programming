# include "main.h"

/**
 * memset - fills a buffer with a const char
 * @j: pointer to a string
 * @b: a dynamic variable of a char
 * @n: an unsigned int holding value of size of value to fill up
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n-- != 0 && (*(s++) = b) == b)
		;
	return (s);
}
