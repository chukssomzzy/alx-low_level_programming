# include "search_algos.h"
# include <stdio.h>
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

	if  (!list)
		return (NULL);
	lw_bptr = list;
	up_bptr = list->express;

	while (up_bptr)
		if (up_bptr->n < value)
		{
			printf("Value checked at index [%lu] = [%i]\n", up_bptr->index, up_bptr->n);
			lw_bptr = up_bptr;
			up_bptr = list->express;
		}


	while  (lw_bptr && lw_bptr->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
		lw_bptr = lw_bptr->next;
	}
	if (lw_bptr->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
		return (lw_bptr);
	}
	printf("Value checked at index [%lu] = [%i]\n", lw_bptr->index, lw_bptr->n);
	return (NULL);
}
