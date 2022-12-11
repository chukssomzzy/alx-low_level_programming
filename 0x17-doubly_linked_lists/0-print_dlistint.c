# include "lists.h"
# include <stdio.h>


/**
 * print_dlistint - print all the elements
 * @h: poinyer to double pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h->next)
	{
		printf("%i\n", h->n);
		return (1);
	}
	printf("%i\n", h->n);
	return (1 + print_dlistint(h->next));
}
