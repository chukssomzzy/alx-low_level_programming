# include "main.h"
# define TRUE 1
# define FALSE 0

/**
 * is_prime_number
 * @n: n to test
 * Return: true or FALSE
 */

int is_prime_number(int n)
{
	int i = 0;

	if (n == 2 || n == 3)
		return (TRUE);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (FALSE);
	for (i = 5; i * i <= n; i +=6)
		if(n % i == 0 || n % (i + 2) == 0)
			return (FALSE);
	return (TRUE);
}
