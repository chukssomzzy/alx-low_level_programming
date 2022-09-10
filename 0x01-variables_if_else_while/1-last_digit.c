#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * * main - the point of entry
 *
 * * Return: success (0)
 */
int main(void)
{
	int n, base, lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	base = 10;
	lastN = n % base;
	if (lastN > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastN);
	else if (lastN == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastN);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 5 and not 0\n", n, lastN);
	}
	return (0);
}
