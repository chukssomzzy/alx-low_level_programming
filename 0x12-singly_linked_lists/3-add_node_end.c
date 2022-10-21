# include "lists.h"

/**
 * add_node_end - add a node to end of lists
 * @head: parent lists
 * @str: str pointer
 *
 * Return: addr of element added
 */

list_t *add_node_end(list_t **head, char *str)
{
	list_t *new, *tmp;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	tmp = *head;
	if (!(*head))
		return ((*head = new));
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (*head);
}

/**
 * _strlen - return len of str excluding terminating
 *				null byte
 * @s: pointer to str
 * Return: len of string or NULL
 */

int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}
