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
	size_t mid;

	while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (array[mid] < value)
		{
			high = mid + 1;
			printf("Value checked for array[%lu] = [%i]\n", mid, array[mid]);
		}
		else if (array[mid] > value)
		{
			printf("Value checked for array[%lu] = [%i]\n", mid, array[mid]);
			low = mid - 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
			return (mid);
		}
	}

	if (array[low] == value)
	{
		printf("Value checked for array[%lu] = [%i]\n", low, array[low]);
		return (low);
	}
	printf("Value checked array[2109] is out of range\n");
	return (-1);
}
