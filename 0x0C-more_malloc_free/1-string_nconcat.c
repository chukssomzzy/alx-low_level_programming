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
	char *p, i, len, s1_len, s2_len;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = len = s1_len = s2_len = 0;
	while (*(s1 + s1_len) != '\0')
		s1_len++;
	while (*(s2 + s2_len) != '\0')
		s2_len++;
	if (n > s2_len)
		n = s2_len;
	len = s1_len + n;
	p = malloc(len + 1);
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		if (i < s1_len)
			*(p + i) = *(s1 + i);
		else
			*(p + i) = *(s2 + i - s1_len);
	return (p);
}
