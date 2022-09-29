# include "main.h"
# include <stdio.h>

int _strcmp(char *s, int i, int l);
int _strlen(char *s);
/**
 * is_palindrome - test if is_palindrome
 * @s: pointer to string
 * Returns: binary
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_strcmp(s, 0, _strlen(s)));
}

/**
 * _strcmp - compare string recursively
 * @s: pointer to string
 * @i: iterating counter
 * @l: length of string
 */

int _strcmp(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	i++;
	l--;
	return (_strcmp(s, i, l));
}

/**
 * _strlen - returns the length of a string recursively
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	int n = 1;
	if (*s == '\0')
		return (0);
	return (n + _strlen(s + 1));
}
