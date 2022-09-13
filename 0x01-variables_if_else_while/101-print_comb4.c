# include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: Success (0)
 */

int main(void)
{
	int end_count, i, j, k, temp, count, compare;

	i = 48;
	j = 48;
	k = 48;
	count = 10;
	end_count = i + count;
	temp = 1;
	for (i = 48; i < end_count; i++)
	{
		for (j = 48; j < end_count; j++)
		{
			for (k = 48; k < end_count; k++)
			{
				compare = (i != j && i != k && j != k && i < j && j < k);
				if (!compare)
					temp = 0;
				if (temp)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (k >= end_count - 1 && i >= end_count - 3)
						temp = 0;
					if (temp)
					{
						putchar(',');
						putchar(' ');
					}
				}
				temp = 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
