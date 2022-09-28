# include "main.h"

/**
 * _strlen_recursion - return string length
 * Description:returns the length of a string
 * @s: pointer to a string in memory
 */

int _strlen_recursion(char *s)
{
 if (*s == '\0')
	 return (0);
 return (1 + _strlen_recursion((s + 1)));
}
