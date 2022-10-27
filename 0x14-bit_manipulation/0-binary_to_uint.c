# include "main.h"

unsigned int _sqrn(unsigned int m, unsigned int n);
unsigned int _strlen(const char *s);
/**
 * binary_to_uint - convert a string of bin to int
 * @b: pointer to string
 *
 * Return: 0 or string Value in dec
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0, exp = 0;

	if (!b)
		return (0);
	i = _strlen(b);
	while (i--)
		if (*(b + i) >= '0' && *(b + i) <= '1')
		{
			if (*(b + i) == '0')
			{
				exp++;
				continue;
			}
			dec += (*(b + i) - '0') * _sqrn(BASE2, exp);
			exp++;
		} else
			return (0);
	return (dec);
}

/**
 * _strlen - len of _str
 * @s: pointer to str
 * Return: len of _strlen
 */


unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

/**
 * _sqrn - take the square of a number m by n
 * @m: base number
 * @n: sup number
 * Return: the square
 */

unsigned int _sqrn(unsigned int m, unsigned int n)
{
	if (n == 0)
		return (1);
	return (m * _sqrn(m, n - 1));
}
