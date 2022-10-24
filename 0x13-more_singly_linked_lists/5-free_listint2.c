# include "lists.h"

/**
 * free_listint2 - free list and set head to null
 * @head: double pointer to head list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	if (!(*head))
		return;
	free(*head);
	while ((*tmp).next)
		free((tmp = tmp->next));
	free(tmp);
	*head = NULL;
}
