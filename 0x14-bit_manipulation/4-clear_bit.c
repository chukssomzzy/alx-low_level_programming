# include "main.h"

/**
 * clear_bit - clear bit at pos
 * @n: number
 * @index: pos
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(*n) * 8;

	if (index >= size)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
