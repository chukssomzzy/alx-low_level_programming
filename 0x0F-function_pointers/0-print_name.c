# include <stdlib.h>

/**
 * print_name - takes a function and prints a print_name
 * @name: pointer to name
 * @f: pointer to a function
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
