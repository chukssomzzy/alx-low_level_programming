# include "lists.h"

/**
 * add_nodeint_end - add node at end of lists
 * @head: Head of lists
 * @n: int member of new node
 * Return: pointer to newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
		return ((*head = new));
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
