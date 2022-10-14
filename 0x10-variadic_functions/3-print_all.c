# include "variadic_functions.h"
# include <stdio.h>
# include <stdarg.h>

void print_string(va_list);
void print_char(va_list);
void print_float(va_list);
void print_int(va_list);

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
	int i, j;
	int fmt_size;
	fmt_t fun_fmts[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string}
	};
	fmt_size = 4;
	va_start(ap, format);
	for (i = 0; format && *(format + i); i++)
		for (j = 0; j < fmt_size; j++)
			if ((*(format + i) == ((fun_fmts + j)->fmt)))
			{
				(*(fun_fmts + j)->print_format)(ap);
				if (*(format + i + 1) != '\0')
					printf(", ");
				break;
			}
	printf("\n");
	va_end(ap);
}

/**
 * print_char - prints char to stdout
 * @aps: pointer to variadic function
 *		 that hold position of the current argument
 *
 * Description: print char to stdout and returns nothing
 */

void print_char(va_list aps)
{
	char c;

	c = va_arg(aps, int);
	printf("%c", c);
}

/**
 * print_float - prints char to stdout
 * @aps: pointer to variadic function
 *		 that hold position of the current argument
 *
 * Description: print float to stdout and returns nothing
 */

void print_float(va_list aps)
{
	float i;

	i = va_arg(aps, double);
	printf("%f", i);
}

/**
 * print_int - prints int to stdout
 * @aps: pointer to variadic function that
 *			hold position of the current argument
 *
 * Description: print int to stdout and returns nothing
 */

void print_int(va_list aps)
{
	int i;

	i = va_arg(aps, int);

	if (i)
		printf("%i", i);
}

/**
 * print_string - prints char to stdout
 * @ap: pointer to variadic function that hold position of the current argument
 *
 * Description: print char to stdout and returns nothing
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s)
		printf("%s", s);
	else
		printf("(nil)");
}


