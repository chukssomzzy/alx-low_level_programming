# include "lists.h"
# include <stdlib.h>
/**
 * list_len - return list len
 * @h: pointer to struct node
 *
 * Return: No of element in list
 */

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (!h->next)
		return (1);
	return (list_len(h->next) + 1);
}
