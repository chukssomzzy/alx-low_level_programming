# include "search_algos.h"
# include <stdio.h>

static int binary_search_bd(int *, size_t, size_t, int);
static void print_array(int *array, size_t, size_t);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @value: the value to search for
 * @size: array size
 * Return: the index of value in the list
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array || !size)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", (bound / 2), (bound));
	return (binary_search_bd(array, (bound / 2), (((bound) < size) ?
					(bound) : (size - 1)), value));
}

/**
 * binary_search_bd - takes a bound and search for a value within that bound
 * @array: pointer to the first element of the array
 * @lw_bound: lower bound of the element
 * @up_bound: upper bound of the gap between the element
 * @value: value to search for in the array
 * Return: the index of the element been searched
 */

int binary_search_bd(int *array, size_t lw_bound, size_t up_bound, int value)
{
	size_t mid;

	while (lw_bound <= up_bound)
	{
		mid = (lw_bound + up_bound) / 2;
		print_array(array, lw_bound, up_bound);
		if (array[mid] < value)
			lw_bound = mid + 1;
		else if (array[mid] > value)
			up_bound = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * print_array - takes an index range and print
 * @array: pointer to the array
 * @st_index: index to start printing from
 * @end_index: index to stop printing at
 */

void print_array(int *array, size_t st_index, size_t end_index)
{
	size_t i;

	printf("Searching in array:");
	for (i = st_index; i <= end_index; i++)
	{
		printf(" %i", *(array + i));
		if (i < end_index)
			printf(",");
	}
	printf("\n");
}
