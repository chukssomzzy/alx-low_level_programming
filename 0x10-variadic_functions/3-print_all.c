# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>

/**
 * print_all - print variadic by knowing the format string
 * @format: pointer to string
 *
 * Description: takes a format string and print
 *				variadic arg in the format specified.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;

	i = 0;
	va_start(ap, format);
	while (*(format + i) != '\0')
		switch (*(format + i++))
		{
			case 'c':
				printf("%i", va_arg(ap, int));
				if (*(format + i) != '\0')
					printf(", ");
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				if (*(format + i) != '\0')
					printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				if (*(format + i) != '\0')
					printf(", ");
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				if (*(format + i) != '\0')
					printf(", ");
				break;
		}
	va_end(ap);
	printf("\n");
}
