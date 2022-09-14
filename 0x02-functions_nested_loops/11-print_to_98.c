# include "main.h"

/**
 * print_to_98 - print natural numbers from n
 * @n: holds starting point
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < (i + 98); i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
