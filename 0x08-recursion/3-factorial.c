# include "main.h"

/**
 * factorial - returns the factorial a number
 * @n: dynamic variable
 * Return: the factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial((n - 1)));
}
