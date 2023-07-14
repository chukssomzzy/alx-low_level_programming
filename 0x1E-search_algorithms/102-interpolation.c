# include "search_algos.h"
# include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: the index of the first value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (!array)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));


		if (array[pos] < value)
		{
			high = pos + 1;
			printf("Value checked for array[%lu] = [%i]\n", pos, array[pos]);
		}
		else if (array[pos] > value)
		{
			printf("Value checked for array[%lu] = [%i]\n", pos, array[pos]);
			low = pos - 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
			return (pos);
		}
	}

	if (array[low] == value)
	{
		printf("Value checked for array[%lu] = [%i]\n", low, array[low]);
		return (low);
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
