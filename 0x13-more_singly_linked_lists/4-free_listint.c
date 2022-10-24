# include "lists.h"

/**
 * free_listint - frees a free_listint
 * @head: Parent
 *
 * Description: Recursively frees a list node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head->next)
	{
		free(head);
		return;
	}
	tmp = head->next;
	free(head);
	free_listint(tmp);
}
