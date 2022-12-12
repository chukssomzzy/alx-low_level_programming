# include "lists.h"

/**
 * sum_dlistint - sum up n component of linked lists
 * @head: pointer to double linked lists
 *
 * Return: sum_dlistint
 */

int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
