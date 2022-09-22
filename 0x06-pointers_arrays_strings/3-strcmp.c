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
	int i, j, n;

	i = j = 0;
	n = 0;
	while (*(s1 + i) != '\0' || *(s2 + j) != '\0')
	{
		if (*(s1 + i) != *(s2 + j))
		{
			n = 1;
		}
		if (*(s1 + i) != '\0')
			i++;
		if (*(s1 + j) != '\0')
			j++;

	}
	if (i < j)
		n = -1;
	return (n);
}
