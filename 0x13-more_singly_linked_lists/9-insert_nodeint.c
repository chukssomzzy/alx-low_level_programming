# include "lists.h"

/**
 * insert_nodeint_at_index - insert node at insert
 * @head: double pointer to node
 * @idx: unsigned int
 * @n: n to insert
 * Return: pointer to node created all NULL;
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (!(*head) || !idx)
		return ((*head = new));
	tmp = *head;
	while (--idx && tmp->next)
		tmp = tmp->next;
	if (idx)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
