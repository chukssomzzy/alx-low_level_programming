# include "lists.h"

void free_listpd(listp_t **h);
/**
 * free_listint_safe - frees list safely
 *
 * @h: head pointer
 * Return: size freed
 */

size_t free_listint_safe(listint_t **h)
{
	listp_t *hptr = NULL, *new, *tmp;
	listint_t *hd, *tmp_h;
	size_t n = 0;

	hd = *h;
	while (hd)
	{
		new = malloc(sizeof(listp_t));
		if (!new)
			exit(98);
		new->p = (void *)(*h);
		new->nxtptr = hptr;
		hptr = new;
		tmp = hptr;
		while ((tmp = tmp->nxtptr))
			if (tmp->p == *h)
			{
				*h = NULL;
					free_listpd(&hptr);
				return (n);
			}
		tmp_h = hd->next;
		free(hd);
		hd = tmp_h;
		n++;
	}
	*h = NULL;
	free_listpd(&hptr);
	return (n);
}

/**
 * free_listp - free a free_listp
 * @h: pointer to head pointer
 */

void free_listpd(listp_t **h)
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
