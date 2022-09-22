# include "main.h"

/**
 * string_toupper - convert string_touppercase
 * @s: pointer to string lookup table
 * Return: address
 */


char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}

