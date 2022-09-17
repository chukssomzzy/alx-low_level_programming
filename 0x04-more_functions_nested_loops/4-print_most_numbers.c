# include "main.h"

/**
 * print_most_numbers - print all number except 2 and 4
 */

void print_most_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		if (c == '2' || c == '4')
		{
			c++;
			continue;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
