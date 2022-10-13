# include "3-calc.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/**
 * main - add, subtract, divide, multiple and modulus
 * @argc: size of argv
 * @argv: contains command line args
 *
 * Return: 0 success and 98 - 100 failed
 */

int main(int argc, char **argv)
{
	int arg_1, arg_2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = *(argv + 2);
	arg_2 = atoi(*(argv + 3));
	if ((*op == '/' || *op == '%') && arg_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	arg_1 = atoi(*(argv + 1));
	if (!get_op_fun(op) || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", get_op_fun(op)(arg_1, arg_2));
	exit(EXIT_SUCCESS);
}

