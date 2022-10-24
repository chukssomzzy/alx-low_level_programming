# include "lists.h"

/**
 * pop_listint - pop pop_listint
 * @head: parents
 * Return: n
 *
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head || !(*head))
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free((*head));
	*head = tmp;
	return (n);
}
