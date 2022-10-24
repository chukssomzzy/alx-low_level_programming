# include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: pointer to parent struct
 * @index: index starts at 0
 * Return: pointer to struct
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	if (!head)
		return (NULL);
	tmp = head;
	while (tmp && index--)
		tmp = tmp->next;
	if (tmp)
		return (tmp);
	return (NULL);
}


