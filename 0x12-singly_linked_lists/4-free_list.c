# include "lists.h"

/**
 * free_list - recursively free free_list
 * @head: parent node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (!head->next)
		return;
	tmp = head->next;
	free(head);
	free_list(tmp);
}
