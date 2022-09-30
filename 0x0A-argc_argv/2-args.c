# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * main - prints args in argv
 * @argc: len of argv
 * @argv: array containing string
 * Return: binary
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *(argv++));
	exit (EXIT_SUCCESS);
}
