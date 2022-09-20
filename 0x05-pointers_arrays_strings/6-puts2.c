# include "main.h"

/**
 * puts2 - print only even
 * @str: pointer to str
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	if (*(str + i) == '\0')
		_putchar('\n');
}
