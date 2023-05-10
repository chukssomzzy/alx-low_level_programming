#include "main.h"
# define BASE 10
/**
 * print_number - prints numbers
 * @n: number to be printed
 */
void print_number(int n)
{
	char tmp[1000];
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (!n)
		_putchar('0');
	while (n)
	{
		tmp[i++] = '0' + n % BASE;
		n /= BASE;
	}
	while (i--)
		_putchar(tmp[i]);
}
