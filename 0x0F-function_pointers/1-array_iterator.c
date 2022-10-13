# include "function_pointers.h"
# include <stdlib.h>

/**
 * array_iterator - execute a function on a array element
 * @array: array to function
 * @size: size of array
 * @action: pointer to function to execute on each element
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array && size && action)
		while (i < size)
			action(*(array + i++));
}
