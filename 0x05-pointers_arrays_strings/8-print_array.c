# include "main.h"
# include <stdlib.h>
# define BASE 10
/**
 * print_array - print array string
 * @a: pointer to array
 * @n: number to print
 */

void print_array(int *a, int n)
{
	int tmp[100], i, current;
	int j = 0;

	for (i = 0; i < n && *(a + i) != '\0'; i++)
	{
		if (i != 0)
			_putchar(' ');
		if (*(a + i) < 0)
			_putchar('-');
		current = abs(*(a + i));
		do {
			*(tmp + j++) = current % BASE;
		} while (current /= BASE);
		while (--j >= 0)
			_putchar(*(tmp + j) + '0');
		if (i < n - 1)
			_putchar(',');
		j = 0;
	}
	_putchar('\n');
}
