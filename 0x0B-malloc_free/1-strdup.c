# include "main.h"
# include <stdlib.h>
/**
 * _strdup - copes a string to a location in memory
 * @str: pointer to string to copy
 * Return: on failure Null and success a pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;

	s = malloc(sizeof(*str));
	if (s == NULL || str == NULL)
		return (NULL);
	i = 0;
	while ((*(s + i) = *(str + i)) != '\0')
		i++;
	return (s);
}
