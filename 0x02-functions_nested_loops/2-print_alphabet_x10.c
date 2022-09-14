 # include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	char ch;
	int n;
	ch = 'a';
	n = 0;
	while (ch <= 'z' && n < 10)
	{
		_putchar(ch);
		if (ch > 'z')
		{
			_putchar('\n');
			ch = 'a';
		}
		n++;
		ch++;
	}
	_putchar('\n');
}
