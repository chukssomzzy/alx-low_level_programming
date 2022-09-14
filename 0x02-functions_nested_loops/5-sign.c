# include "main.h"

/**
 * print_sign - print sign of input
 * @n: holds interger params
 * Return: (1) on positive, 0 on zero and -1 on negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
