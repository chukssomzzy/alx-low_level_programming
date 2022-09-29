# include "main.h"
# define TRUE 1
# define FALSE 0

/**
 * is_prime_number
 * @n: n to test
 * Return: true or FALSE
 */
int i = 5;

int is_prime_number(int n)
{
	extern int i;

	if (n == 2 || n == 3)
		return (TRUE);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (FALSE);
	if (n % i == 0 || n % (i + 2) == 0)
		return FALSE;
	if (i * i > n)
		return TRUE;
	i += 6;
	return is_prime_number(n);
}
