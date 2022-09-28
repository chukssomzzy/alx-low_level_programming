# include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: pointer to a string in memory
 * Return: str len
 */

int _strlen_recursion(char *s)
{
 if (*s == '\0')
	 return (0);
 return (1 + _strlen_recursion((s + 1)));
}
