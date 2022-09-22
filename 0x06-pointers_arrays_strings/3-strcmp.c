# include "main.h"
# include <stdio.h>

/**
 * _strcmp - compares two string
 * @s1: first charcter string pointer
 * @s2: second character string pointer
 * Description: compare two string and returns an integer
 * Return: 0 if equal, -1 if less and 1 if not equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		*s1++;
		*s2++;
	}
	return (*s1 - *s2);
}
