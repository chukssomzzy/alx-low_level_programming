# include "lists.h"

/**
 * dlistint_len - length of double linked lists
 * @h: pointer to double linked list
 * Return: number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (!(h->next))
		return (1);
	return (1 + dlistint_len(h->next));
}
