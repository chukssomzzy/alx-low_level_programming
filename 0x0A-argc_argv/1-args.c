# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * main - print number of arg in arg vector
 * @argc: number of arg in argv
 * @argv: hold arg
 * Return: binary
 */

int main(int argc, char __attribute__ ((unused))**argv)
{
	printf("%i\n", argc - 1);
	exit(EXIT_SUCCESS);
}
