# include "main.h"

/**
 * string_toupper - convert string_touppercase
 * @s: pointer to string lookup table
 * Return: address
 */

char *string_toupper(char *s)
{
	int diff;

	diff = 'a' - 'A';
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*(s) -= diff;
		s++;
	}
	return (s);

}

