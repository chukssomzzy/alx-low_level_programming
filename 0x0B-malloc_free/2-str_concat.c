# include "main.h"
#include <stdlib.h>

int _strsize(char *s);
/**
 * str_concat - joins two string
 * @s1: first string
 * @s2: second string
 * Return: Null all pointer to the string joined
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s;

	if (!s1 && !s2)
		return (NULL);
	i = s1 ? _strsize(s1) : 0;
	j = s2 ? _strsize(s2) : 0;
	s = malloc((sizeof(char) * (i + j)) + 1);
	if (!s)
	{
		free(s);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		*(s + k) = *(s1 + k);
	i = k;
	for (j = 0; j <= i; j++, k++)
		*(s + k) = *(s2 + j);
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
	while (*(s + i) != '\0')
		i++;
	return (i);
}
