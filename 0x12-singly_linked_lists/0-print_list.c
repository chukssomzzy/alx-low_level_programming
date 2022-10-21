# include "lists.h"
# include <stdlib.h>
# include <stdio.h>


/**
 * print_list - Prints a link list and return number
 * @h: pointer to list to print
 *
 * Return: number of struct
 */

size_t print_list(const list_t *h)
{
	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	if (!h->next)
		return (0);
	return (1 + print_list(h->next));
}
