# include "main.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * main - print the program name
 * @argc: hold the len of arg vector
 * @argv: arg vector (1 dimensional array)
 * Return: success or failure
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
