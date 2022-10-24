# include "lists.h"

/**
 * listint_len - returns the numbers of element in a
 *				 linked lists
 * @h: linked lists
 * Return: Numbers of elements in linked lists
 */

size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);
	if (!h->next)
		return (1);
	return (1 + listint_len(h->next));
}
