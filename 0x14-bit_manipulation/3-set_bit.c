# include "main.h"

/**
 * set_bit - set a bit pos
 * @n: number
 * @index: pos
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(*n) * 8;

	if (index >= size)
		return (-1);
	*n |= (1 << index);
	return (1);
}
