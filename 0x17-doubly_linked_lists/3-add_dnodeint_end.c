#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a lists
 * @head: double pointer to a double linked lists
 * @n: content of new linked lists
 *
 * Return: Null on failure or pointer to newly created linked
 *			lists
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!n)
		new->n = 0;
	else
		new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (head && !(*head))
		return (*head = new);
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
