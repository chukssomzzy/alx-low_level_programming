# include "lists.h"

/**
 * add_nodeint - add a node at biggining of lists
 * @head: list head
 * @n: int member of node
 * Return: A pointer to the newly created element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new  = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
