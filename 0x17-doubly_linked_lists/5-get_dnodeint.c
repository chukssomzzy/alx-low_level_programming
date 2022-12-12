# include "lists.h"

/**
 * get_dnodeint_at_index - get node at get_dnodeint_at_index
 * @head: pointer to node
 * @index: index to get
 *
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!index || !head)
		return (head);
	return (get_dnodeint_at_index(head->next, index - 1));
}
