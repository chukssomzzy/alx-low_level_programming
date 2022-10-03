# include "main.h"
# include <stdlib.h>

/**
 * create_array  - create an array of char
 * @size: size of array
 * @c: ascii decimal value of char
 * Return: pointer or NULl
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(*s) * size);
	i = 0;
	if (s == NULL || size == 0)
		return (NULL);
	while (size-- > 0)
		*(s + i++) = c;
	return (s);
}
