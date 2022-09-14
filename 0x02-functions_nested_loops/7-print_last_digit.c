# include "main.h"
/**
 * print_last_digit - print the last digit in base 10
 * @n: int params
 * Return: (last digit)
 */

int print_last_digit(int n)
{
	int ln = n % 10;

	if (ln < 0)
		ln *= -1;
	_putchar(ln + '0');
	return (ln);
}
