# include "lists.h"

/**
 * delete_nodeint_at_index - free node at index
 * @head: parent node
 * @index: starting pos
 * Return: 1 (success) -1 (failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *pos, *curr;

	if (!head || !(*head))
		return (-1);
	if (!index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	tmp = *head;
	while (--index && tmp->next)
		tmp = tmp->next;
	if ((index))
		return (-1);
	pos = tmp->next;
	curr = tmp;
	curr->next = pos->next;
	free(pos);
	return (1);
}
