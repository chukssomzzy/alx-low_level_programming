# include "search_algos.h"
# include <math.h>
# include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to searcg
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t par_lft = 0;
	size_t jmp_sz = sqrt(size);
	size_t par_rht = jmp_sz;

	printf("Value checked array[%lu] = [%i]\n", par_lft, array[par_lft]);
	while (par_rht < size)
	{
		if (array[par_rht] < value)
		{
			printf("Value checked array[%lu] = [%i]\n", par_rht, array[par_rht]);
			par_lft = par_rht;
			par_rht = par_lft + jmp_sz;
			continue;
		}
		break;
	}
	if (par_rht < size)
		printf("Value found between indexes [%lu] and [%lu]\n", par_lft, par_rht);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", par_lft, size);
	while (par_lft < size)
	{
		printf("Value checked array[%lu] = [%i]\n", par_lft, array[par_lft]);
		if (array[par_lft] == value)
			return (par_lft);
		par_lft++;
	}
	return (-1);
}
