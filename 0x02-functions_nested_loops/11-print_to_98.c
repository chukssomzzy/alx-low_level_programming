# include "main.h"
# include <stdio.h>
/**
 * print_to_98 - print natural numbers from n
 * @n: holds starting point
 */

void print_to_98(int n)
{
	int i, first, second, last, tmp, compare, state, tmp_i;

	i = n;
	compare = 98;
	do {
		tmp_i = i;
		if (tmp_i < 0)
		{
			tmp_i *= -1;
			_putchar('-');
		}
		first = tmp_i / 10;
		if (first > 9)
		{
			state = 1;
			tmp = first / 10;
			second = first / 10;
			first = tmp;
			last = tmp_i % 10;
			_putchar(first + '0');
			_putchar(second + '0');
			_putchar(last + '0');
		} else
		{
			state = 0;
			last = tmp_i % 10;
			if (i > 9 && i >= 0)
				_putchar(first + '0');
			_putchar(last + '0');
		}
		if (i < compare || state || (last != 8))
		{
		_putchar(',');
		_putchar(' ');
		}
		if (i > compare)
			i--;
		else
			i++;
	} while (i <= compare || (state || (first != 9 && last != 8)));
	_putchar('\n');
}
