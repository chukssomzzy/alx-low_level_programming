#include "main.h"
# define NULL 0
/**
 * _strchr - find a char
 * @s: pointer to address where string
 * @c: char to find
 * Return: on find return address
 */

char *_strchr(char *s, char c)
{

	while (*(s++) != c)
		;
	if (*(--s) == c)
		return (s);
	return (NULL);
}
