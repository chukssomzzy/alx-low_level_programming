# include "search_algos.h"
# include <stdio.h>

static void print_array(int *, size_t, size_t);
static int binary_search_r(int *, size_t, size_t, size_t, int);
/**
 * advanced_binary - searches for a value in a sorted list recursively
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index of the value located
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search_r(array, size, 0, size - 1, value));
}

/**
 * binary_search_r - search for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @lw_bound: lower bound
 * @up_bound: upper bound
 * @value: Value to search in the array
 * Return: location of the value
 */

int binary_search_r(int *array, size_t size, size_t lw_bound, size_t up_bound,
		int value)
{
	int mid;

	if (lw_bound == size || size == 0 || !array)
		return (-1);
	mid = (lw_bound + up_bound) / 2;
	print_array(array, lw_bound, up_bound);
	if (array[lw_bound] == value)
		return (lw_bound);

	if (array[mid] < value)
		lw_bound = mid + 1;
	else
		up_bound = mid;
	return (binary_search_r(array, size, lw_bound, up_bound, value));
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
