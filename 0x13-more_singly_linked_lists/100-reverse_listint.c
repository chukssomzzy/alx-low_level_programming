# include "lists.h"

/**
 * reverse_listint - reverse a reverse_listint
 * @head: pointer to pointer that points to node to reverse🙁
 * Return: A pointer to the first node of the reversed pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL;
	listint_t *p = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		(*head) = n;
	}
	*head = p;
	return (*head);
}
