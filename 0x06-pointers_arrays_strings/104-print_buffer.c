# include "main.h"
# include <stdio.h>
# define BASE 10
/**
 * print_buffer - print buffer and char address
 * @b: buffer to print
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, j;

	i = 0;
	while (i <= size)
	{
		for (j = 0; j <= 6; j++)
		{
			if (!j)
				printf("%.8x: ", *(b + j + i));
			if ((j + 1) <= 5)
				printf("%.2x%.2x ", *(b + j + i), *(b + j + i));
		}
		for (j = 0; j < 10; j++)
		{
			if (*(b + i + j) >= 32 && *(b + i + j) <= 126)
				putchar(*(b + j + i));
			else
				putchar('.');

		}
		if(j == 9)
			putchar('\n');
	}

}
