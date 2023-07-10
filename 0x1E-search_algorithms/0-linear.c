# include "search_algos.h"
# include <stdio.h>


/**
 * linear_search - searches for a value in an array of integers using the
 *			linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to searvh
 * Return: first index whete value is located or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
