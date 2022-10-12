# include "function_pointers.h"
# include <stdlib.h>

/**
 * int_index - search for a number
 * @array: pointer to array address
 * @size: size of array
 * @cmp: compare function
 * Return: index of cmp(int)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i <  size)
		if (cmp(*(array + i++)))
			return (i);
	return (-1);
}
