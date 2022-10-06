# include "main.h"
# include <stdlib.h>

/**
 * string_nconcat - concat two strings
 * @s1: The first strings
 * @s2: second string pointer
 * @n: unsigned interger indicating number of bytes to copy
 * Return: a pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, i, j, tmp;

	if (!s1 || !s2)
		return (NULL);
	p = malloc((sizeof(*s1)) + n - 1);
	if (!p)
	{
		free(p);
		return (NULL);
	}
	i = 0;
	while ((*(p + i) = *(s1 + i)) != '\0')
		i++;
	j = 0;
	tmp = n;
	while (tmp-- > 0 && (*(p + i) = *(s2 + j++)) != '\0')
		i++;
	if (*(p + i++) != '\0')
		*(p + i) = '\0';
	return (p);
}
