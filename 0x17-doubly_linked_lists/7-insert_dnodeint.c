# include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head
 * @idx: index to insert node
 * @n: node to insert
 * Return: pointer to new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	size_t i = 0;

	if ((idx && h && !(*h)) || !h)
		return (NULL);
	tmp = *h;
	while (!(tmp->prev))
		tmp = tmp->prev;
	while ((i != idx) && (tmp->next))
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!idx && h && !(*h))
		return (*h = new);
	if (!idx)
	{
		new->next = tmp;
		tmp->prev = new;
		return (*h = new);
	}
	tmp->prev->next = new;
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev = new;
	return (new);
}
