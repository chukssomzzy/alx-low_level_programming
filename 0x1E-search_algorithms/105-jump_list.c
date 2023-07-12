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
	size_t lw_bound;
	size_t jmp_sz;
	size_t up_bound;
	listint_t *lw_bptr;
	listint_t *up_bptr;

	if (!list)
		return (NULL);
	jmp_sz = sqrt(size);
	lw_bound = 0;
	up_bound = jmp_sz;
	up_bptr = list;
	lw_bptr = list;

	while (up_bptr->index != ((up_bound < size) ? up_bound : size) - 1)
	{
		up_bptr = up_bptr->next;
		if (up_bptr->index == up_bound && up_bptr->n < value)
		{
			lw_bptr = up_bptr;
			lw_bound = up_bound;
			up_bound += jmp_sz;
		} else if (lw_bound >= size)
			return (NULL);
	}

	while (lw_bptr->n < value)
	{
		lw_bptr = lw_bptr->next;
		if (lw_bptr->index == (up_bound < size) ? up_bound : size)
			return (NULL);
	}
	if (lw_bptr->n == value)
		return (lw_bptr);
	return (NULL);
}
