# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * main - prints tge minimum number of coins to make change for an amount of
 *			money
 * @argc: number of arg
 * @argv: pointers to arg pass to program
 * Return: 1 or 0 for fail or success
 */

int main(int argc, char **argv)
{
	int div[] = {25, 10, 5, 2, 1};
	int i = 0;
	int chg = 0;
	int tmp_amt;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tmp_amt = atoi(*(argv + 1));
	if (tmp_amt < 0)
	{
		printf("0\n");
		return (1);
	}
	while (tmp_amt)
	{
		int tmp;

		tmp = tmp_amt / div[i];
		if (tmp || div[i - 1] == 1)
		{
			tmp_amt = tmp_amt % div[i];
			chg += tmp;
		}
		i++;
	}
	printf("%i\n", chg);
	return (0);
}
