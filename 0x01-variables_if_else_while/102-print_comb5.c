# include <stdio.h>

/**
 * main - entry point for program execution
 *
 * Return: on Success (0)
 */

int main(void)
{
	int count, i, j, k, l, end_count;

	count = 10;
	i = 48;
	j = 48;
	k = 48;
	l = 48;
	end_count = i + count;

	for (i = 48; i < end_count; i++)
	{
		for (j = 48; j < end_count - 1; j++)
		{
			for (k = i; k < end_count; k++)
			{
				for (l = j + 1; l < end_count; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == 57 && j == 56 && k == 57 && l == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
