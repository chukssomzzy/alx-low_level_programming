# include <unistd.h>
# ifndef stdout
# define stdout 1
# endif
/**
 * _putchar - write char to stdout
 * @c: char to write
 *
 * Return: No of char written
 */

int _putchar(char c)
{
	return (write(stdout, &c, 1));
}
