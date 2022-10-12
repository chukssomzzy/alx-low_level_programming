# include "function_pointers.h"
# include <stdlib.h>

/**
 * int_index - search for a number
 * @array: pointer to array address
 * @size: size of array
 * @cmp: compare function
 *
 * Return: indexof element found or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	i = 0;
	while (i < (unsigned int) size)
		if (cmp(*(array + i++)))
			return (i - 1);
	return (-1);
}
