# include "lists.h"

/**
 * add_node - append element to a node
 * @head: list parent
 * @str: to append to newly created node
 *
 * Return: returns address of the newly created element or a null pointer
 */

list_t *add_node(list_t **head, char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
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
