# include <stdio.h>
# include <stdlib.h>


/**
 * main - print opcodes of the running program (100-main_opcodes)
 * @argc: size of argv
 * @argv: contains all cmd args
 *
 * Return: binary
 */

int main(int argc, char **argv)
{
	char *op_codes = (char *) main;
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(*(argv + 1));
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < num)
	{
		printf("%02x", *(op_codes + i) & 0xff);
		if (i != (num - 1))
			printf(" ");
		i++;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
