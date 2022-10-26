# include "lists.h"

void free_listp(listp_t **);
/**
 * print_listint_safe - print print_listint_safe
 * @head: head of struct
 *
 * Return: number of struct
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listp_t *hptr = NULL, *new = NULL, *tmp = NULL;

	while (head)
	{
		new = malloc(sizeof(listp_t));
		if (!new)
		{
			free_listp(&hptr);
			exit(98);
		}
		new->p = (void *) head;
		new->nxtptr = hptr;
		hptr = new;
		tmp = new;
		while ((tmp = tmp->nxtptr))
			if (head == tmp->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (n);
			}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	free_listp(&hptr);
	return (n);
}

/**
 * free_listp - free a free_listp
 * @h: pointer to head pointer
 */

void free_listp(listp_t **h)
{
	listp_t *n = NULL, *c = NULL;

	if (h)
	{
		c = *h;
		while ((n = c->nxtptr))
		{
			free(c);
			c = n;
		}
		free(n);
		*h = NULL;
	}
}
