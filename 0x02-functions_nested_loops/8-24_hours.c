# include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int i, j, first, last;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			first = i / 10;
			last = i % 10;
			_putchar('0' + first);
			 _putchar('0' + last);
			first = j / 10;
			last = j % 10;
			_putchar(':');
			_putchar('0' + first);
			_putchar('0' + last);
			_putchar('\n');
		}
	}
}
