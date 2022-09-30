# include "main.h"
# include <stdio.h>
# include <stdlib.h>

int is_al(char *s);
/**
 * main - add numbers
 * @arvc: size of argv
 * @argv: contains all cmd line args
 * Return: binary
 */

int main(int argc, char **argv)
{
	int n, i;

	n = 0;
	i = 1;
	while (i < argc)
	{
		if (is_al(*(argv + i)))
			n += atoi(*(argv + i));
		else
		{
			printf("ERROR\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
	printf("%i\n", n);
	exit(EXIT_SUCCESS);
}


/**
 * is_al: checks if a string contains an alphabet
 * @c: pointer to string
 * Return: binary
 */

int is_al(char *s)
{
	if ((*s >= '0' && *s <= '9'))
		return (1);
	else if (*s == '\0')
		return (0);
	return (is_al(s + 1));
}
