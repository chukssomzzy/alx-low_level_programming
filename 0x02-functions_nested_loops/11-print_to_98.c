# include "main.h"

/**
 * print_to_98 - print natural numbers from n
 * @n: holds starting point
 */

void print_to_98(int n)
{
	int i, first, second, last, tmp;

	for (i = n; i < (i + 98); i++)
	{
		first = i / 10;
		if (first > 9)
		{
			tmp = first / 10;
			second = first / 10;
			first = tmp;
			last = i % 10;
			_putchar(first + '0');
			_putchar(second + '0');
			_putchar(last + '0');
		} else
		{
			last = i % 10;
			_putchar(first + '0');
			_putchar(last + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
