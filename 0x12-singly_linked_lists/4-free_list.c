# include "lists.h"

/**
 * free_list - recursively free free_list
 * @head: parent node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	if (!head->next)
	{
		free(head->str);
		free(head);
		return;
	}
	tmp = head->next;
	free(head->str);
	free(head);
	free_list(tmp);
}
