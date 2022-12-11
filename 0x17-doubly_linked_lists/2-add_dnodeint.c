# include "lists.h"

/**
 * add_dnodeint - add new node to beginning of a lists
 * @head: pointer to head node of double linked lists
 * @n: new node int
 *
 * Return: pointer to new element or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (head && !(*head))
		return (*head = new);
	new->next = *head;
	*head = new;
	return (new);
}
