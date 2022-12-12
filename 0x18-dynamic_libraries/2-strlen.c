# include "main.h"

/**
 * _strlen - return the length of a string
 * Description: assume that end of all string is \0
 * @s: pointer to character array
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i++) != '\0')
		;
	return (--i);
}
