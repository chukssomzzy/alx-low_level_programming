# include "lists.h"

/**
 * sum_listint - sum of element n of sum_listint
 * @head: parent node
 * Return: sum of n
 */

int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	if (!head->next)
		return (head->n);
	return (head->n + sum_listint(head->next));
}
