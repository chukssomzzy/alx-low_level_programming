# include "3-calc.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * op_add - return the addition of two int
 * @a: first int
 * @b: second int
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the subtraction of two int
 * @a: first int
 * @b: second int
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication of two int
 * @a: first int
 * @b: second int
 *
 * Return: a x b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - return the division of two int
 * @a: first int
 * @b: second int
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a / b);
}

/**
 * op_mod - return the modulus of two int
 * @a: first int
 * @b: second int
 *
 * Return: a + b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a % b);
}
