# include "lists.h"

/**
 * free_dlistint - free list pointer to head
 * @head: pointer to head
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	tmp = head->next;
	free(head);
	free_dlistint(tmp);
}
