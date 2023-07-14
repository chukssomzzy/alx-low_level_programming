# include "search_algos.h"
# include <stdio.h>

static void print_array(int *, size_t, size_t);
/**
 * binary_search - searches for a value in a sorted array of integers using
 *	the Binary Search Algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of element or NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lftm;
	size_t rhtm;
	size_t mid;

	if (!array)
		return (-1);
	lftm = 0;
	rhtm = size - 1;
	while (lftm <= rhtm)
	{
		mid = (lftm + rhtm) / 2;
		print_array(array, lftm, rhtm);
		if (*(array + mid) < value)
			lftm = mid + 1;
		else if (*(array + mid) > value)
			rhtm = mid - 1;
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
