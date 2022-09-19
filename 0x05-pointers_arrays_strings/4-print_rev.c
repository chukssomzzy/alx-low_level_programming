# include "main.h"

/**
 * print_rev - reverse uno
 * @s: pointer to a character array
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
		;
	while (i >= 0)
		_putchar(*(s + --i));
	if (++i == 0)
		_putchar('\n');
}
