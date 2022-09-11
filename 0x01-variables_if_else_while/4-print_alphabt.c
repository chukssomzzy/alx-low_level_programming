# include <stdio.h>

/**
 * * main - entry point
 * * Return: Success(0)
 */

int main(void)
{
	char alpha = 97;

	while (alpha < (97 + 26))
	{
		if (!(alpha == 101 || alpha == 113))
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
