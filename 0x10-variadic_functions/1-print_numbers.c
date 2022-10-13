# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
 * print_numbers - print number seperator fellowed
 *					by a newline.
 * @seperator: points to a seperation string
 * @n: holds number of variadic params
 *
 * Description: Takes a constant char a num of varidic
 *				args as n, and prints out a number seperated
 *				by seperator and lastly fellowed by a newline
 *				character.
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	i = 0;
	if (seperator && n)
	{
		va_start(ap, n);
		while (i++ < n)
		{
			printf("%i", va_arg(ap, int));
			if (i < n)
				printf("%s", seperator);
		}
		va_end(ap);
	}
	printf("\n");
}
