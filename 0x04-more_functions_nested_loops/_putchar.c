# include "main.h"
# include <unistd.h>
/**
 * _putchar - prints a character to stdoutput
 * @c: holds variable for the character to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
