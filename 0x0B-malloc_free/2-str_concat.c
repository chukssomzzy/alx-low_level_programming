# include "main.h"
#include <stdlib.h>

int _strsize(char *s);
/**
 * _strconcat - joins two string
 * @s1: first string
 * @s2: second string
 * Return: Null all pointer to the string joined
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (!s1 || !s2)
		return (NULL);
	i = _strsize(s1);
	j = _strsize(s2);
	s = malloc(sizeof(char) * (i + j));
	if (!s)
		return (NULL);
	i = 0;
	while ((*(s + i) = *(s1 + i)) != '\0')
		i++;
	for (j = 0; (*(s + i) = *(s2 + j)) != '\0'; i++, j++)
		;
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
