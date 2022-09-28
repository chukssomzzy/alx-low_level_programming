# include "main.h"

/**
 * _puts_recursion - uses recursion to print chars to stdout
 * Description: Recursion uses the memory stack and call by value
 * @s: pointer to string to printout
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	} else
		_putchar('\n');
}
