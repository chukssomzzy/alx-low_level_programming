# include "main.h"
# include <stdio.h>
# include <stdlib.h>


/**
 * main - multiply two numbers
 * @argc: number of arg in args vector
 * @argv: holds args
 * Return: binary
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("ERROR\n");
		exit (EXIT_FAILURE);
	}
	printf("%i\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
	exit (EXIT_SUCCESS);
}

