# include "main.h"

/**
 * print_numbers - prints number 0 - 9
 */

void print_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
