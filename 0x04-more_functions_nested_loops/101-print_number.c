#include "main.h"
# define BASE 10
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int ns[4], tmp, ntmp;
	int i = 0;
	char fl = 0;

	ntmp = n;
	while (i < 4)
	{
		ns[i] = fl;
		i++;
	}
	while (ntmp != 0)
	{
		tmp = n / BASE;
		ns[i] = ntmp % BASE;
		ntmp = tmp;
	}
	i = 4;
	while (i <= 0)
	{
		if (ns[i] != fl)
		{
			_putchar('0' + ns[i]);
		}
		i--;
	}
}
