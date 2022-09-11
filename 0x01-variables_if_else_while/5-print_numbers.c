# include <stdio.h>

/**
 * * main - entry point of the program
 *
 * * Return: success(0)
 */

int main(void)
{
	int numChar = 48;

	while (numChar < 48 + 10)
	{
		putchar(numChar);
		numChar++;
	}
	putchar('\n');
	return (0);
}
