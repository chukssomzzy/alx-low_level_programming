 # include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int n;

	ch = 'a';
	n = 0;
	while (ch <= 'z' && n <= 10)
	{
		_putchar(ch);
		if (ch >= 'z')
		{
			_putchar('\n');
			ch = '`';
			n++;
		}
		ch++;
	}
}
