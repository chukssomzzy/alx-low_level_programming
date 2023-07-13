# include "search_algos.h"
#include <complex.h>
# include <stdio.h>
# include <math.h>

/**
 * jump_list - function that searches for a value in a sorted list of integers
 * using the jump search algorithm
 * @list: pointer to the head fo the list to search
 * @size: number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t lw_bound = 0;
	size_t jmp_sz = sqrt(size);
	size_t up_bound = jmp_sz;
	listint_t *lw_bptr;
	listint_t *up_bptr;

	if (!list)
		return (NULL);
	lw_bptr = list;
	up_bptr = list;

	while (up_bptr->index <= ((up_bound < size) ? up_bound : size))
	{
		if (up_bptr->index == up_bound && up_bptr->n < value)
		{
			printf("Value checked at index [%lu] = [%i]\n", up_bptr->index, up_bptr->n);
			lw_bptr = up_bptr;
			lw_bound = up_bound;
			up_bound += jmp_sz;
		} else if (lw_bound >= size)
			return (NULL);
		up_bptr = up_bptr->next;
		if (!up_bptr)
			break;
	}
	printf("Value found between indexes [%lu] = [%lu]\n", lw_bound, up_bound);
	while (lw_bptr->n < value && lw_bptr->index < (size - 1))
	{
		printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
		lw_bptr = lw_bptr->next;
		if (lw_bptr->index == ((up_bound < size) ? up_bound : size))
			return (NULL);
	}
	if (lw_bptr->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
		return (lw_bptr);
	}
	printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
	return (NULL);
}
