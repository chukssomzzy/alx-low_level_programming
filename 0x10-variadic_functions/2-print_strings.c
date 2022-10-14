# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>

/**
 * print_strings - prints string as on variadic argument
 * @seperator: seperate the printwd string
 *
 * Description: Print string passed as variadic args
 *				without
 * @seperator: seperate two string
 * @n: number of variadic args
 */

void print_strings(const char *seperator, unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	i = 0;
	if (n)
	{
		va_start(ap, n);
		while (i++ < n)
		{
			s = va_arg(ap, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			if (i < n && seperator)
				printf("%s", seperator);
		}
		va_end(ap);
	}
	printf("\n");
}
