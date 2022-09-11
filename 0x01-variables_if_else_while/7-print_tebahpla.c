# include <stdio.h>

/**
 * * main - entry point
 * * Description: reverse char using ascii and put char
 * * Return: success(0)
 */

int main(void)
{
	int alphaChar = 122;

	while (alphaChar > (122 - 26))
	{
		putchar(alphaChar);
		alphaChar--;
	}
	putchar('\n');
	return (0);
}
