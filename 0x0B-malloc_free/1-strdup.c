# include "main.h"
# include <stdlib.h>

int _strsize(char *s);

/**
 * _strdup - copes a string to a location in memory
 * @str: pointer to string to copy
 * Return: on failure Null and success a pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i, size;

	size = _strsize(str);
	s = malloc(sizeof(char) * size);
	if (s == NULL || str == NULL)
		return (NULL);
	i = 0;
	while ((*(s + i) = *(str + i)) != '\0')
		i++;
	return (s);
}

/**
 * _strsize - return the size of a string
 * @s: pointer to s
 * Return: size of a string
 */

int _strsize(char *s)
{
	int i;

	i = 0;
	while (*(s + i++) != '\0')
		;
	return (i);
}
