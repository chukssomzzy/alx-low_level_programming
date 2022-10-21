# ifndef _LIST_H_
# define _LIST_H_
# ifndef NULL
# define NULL ((void *)0)
# endif
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
int _putchar(char);
size_t list_len(const list_t *h);
list_t *add_node(list_t **, char *);
list_t *add_node_end(list_t **, char *);
void free_list(list_t *head);
# endif

