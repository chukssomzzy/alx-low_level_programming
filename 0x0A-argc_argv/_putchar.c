# include <stdio.h>
# include <unistd.h>
/**
 * _putchar - print a character
 * @ch: a character to print
 * Return: success (0)
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

