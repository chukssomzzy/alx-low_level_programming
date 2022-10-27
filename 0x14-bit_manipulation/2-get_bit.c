# include "main.h"

/**
 * get_bit - Returns the value of bit at an index
 * @n: number to get bit from
 * @index: pos
 *
 * Return: binary
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;

	if (index >= size)
		return (-1);
	return ((n >> index) & 1);
}
