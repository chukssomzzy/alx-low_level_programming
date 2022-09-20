# include "main.h"

/**
 * puts_half - prints half
 * @str: character string pointer
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;
	for (i = n; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	if (*(str + i) == '\0')
		_putchar('\n');

}
