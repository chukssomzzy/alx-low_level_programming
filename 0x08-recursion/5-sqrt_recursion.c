# include "main.h"
# include <stdlib.h>



/**
 * test - check primity
 * Return: prime number
 */

int test(int n, int g)
{
	if (abs((n / g) - g) < 0.001)
		return g;
	else
		return test(n, (g + n / g) / 2);
}







/**
 * _sqrt_recursion - recursive find square root
 * @n: number to find it's square root
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	int t;

	t = test(n, 1);
	if(t * t != n)
		return (-1);
	return (t);
}
