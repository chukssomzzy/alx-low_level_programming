# include "main.h"

/**
 * _puts - write a string stdout fellowed by a \n
 * @str: pointer arrithemetic holds a string value
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		_putchar(*(str + i++));
	if (*(str + i) == '\0')
		_putchar('\n');
}
