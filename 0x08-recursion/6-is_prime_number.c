# include "main.h"
# define TRUE 1
# define FALSE 0

int check_is_prime_number(int, int);
/**
 * is_prime_number - test prime
 * @n: n to test
 * Return: true or FALSE
 */

int is_prime_number(int n)
{
	int i = 5;

	return check_is_prime_number(n, i);
}

/**
 * check_is_prime_number - test prime
 * @n: n to test
 * @x: interate recursive on x
 * Return: 1 as true and 0 as FALSE
 */

int check_is_prime_number(int n, int x)
{
	if (n == 2 || n == 3)
		return (TRUE);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (FALSE);
	if (!(n % x) || !(n % (x + 2)))
		return (FALSE);
	if (x * x > n)
		return (TRUE);
	return check_is_prime_number(n, (x + 6));
}
