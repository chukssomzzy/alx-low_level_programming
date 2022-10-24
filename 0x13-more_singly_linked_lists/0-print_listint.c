# include "lists.h"

/**
 * print_listint - prints a node
 * @h: prints linked lists
 * Return: Number of list printed
 */

size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	printf("%i\n", h->n);
	if (!h->next)
		return (1);
	return (1 + print_listint(h->next));
}
