#include "main.h"

/**
 * _strspn - returns number of b occurs in a
 * @s: pointer to string
 * @accept: pointer to accept string
 * Return: number of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, j;
	char **a = &accept;

	n = 0;
	while (*s)
	{
		for (j = 0; *(*a + j); j++)
			if (*(*a + j) == *s)
			{
				n++;
				break;
			}
			else if (*(*a + j + 1) == '\0')
				return (n);
		s++;
	}
	return (n);
}
