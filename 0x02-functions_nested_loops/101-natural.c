# include <stdio.h>
# define FIVE 5
# define THREE 3
# define BASE 10
/**
 * main - prints the sum of multiples of 1024
 * Return: success (0)
 */

int main(void)
{
	int i, n;
	int p[10];
	long sum;

	n = 1024;
	sum = 0;
	for (i = n; i >= 0; i--)
	{
		if (!(i % FIVE) || !(i % THREE))
			sum += i;
	}
	i = 0;
	while (sum != 0)
	{
		p[i] = sum % BASE;
		sum = sum / BASE;
		i++;
	}
	putchar('0' + p[5]);
	putchar('0' + p[4]);
	putchar('0' + p[3]);
	putchar('0' + p[2]);
	putchar('0' + p[1]);
	putchar('0' + p[0]);
	putchar('\n');
	return (0);
}
