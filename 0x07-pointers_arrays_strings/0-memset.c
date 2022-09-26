# include "main.h"

/**
 * _memset - fills a buffer with a const char
 * @s: pointer to a string
 * @b: a dynamic variable of a char
 * @n: an unsigned int holding value of size of value to fill up
 * Return: deference buffer
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (--n != 0 && (*(s++) = b) == b)
		;
	return (s);
}
