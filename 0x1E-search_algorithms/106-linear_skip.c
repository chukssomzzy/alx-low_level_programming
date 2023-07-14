# include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search
 * @value: Value to search for
 * Return: pointer on the first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *up_bptr;
	skiplist_t *lw_bptr;
	skiplist_t *tmp_b;

	if  (!list)
		return (NULL);
	lw_bptr = list;
	up_bptr = list->express;

	while (up_bptr && up_bptr->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", up_bptr->index, up_bptr->n);
		lw_bptr = up_bptr;
		up_bptr = up_bptr->express;
	}
	if (up_bptr)
	{
		printf("Value checked at index [%lu] = [%i]\n", up_bptr->index, up_bptr->n);
		printf("Value found between indexes [%lu] and [%lu]\n", lw_bptr->index,
				up_bptr->index);
	} else
	{
		tmp_b = lw_bptr;
		while ((tmp_b = tmp_b->next) && (up_bptr = tmp_b))
			;
		printf("Value found between indexes [%lu] and [%lu]\n", lw_bptr->index,
				up_bptr->index);
	}
	while  (lw_bptr && lw_bptr->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
		lw_bptr = lw_bptr->next;
	}
	if (lw_bptr && lw_bptr->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
		return (lw_bptr);
	}
	return (NULL);
}
