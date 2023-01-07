# include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print hash hash
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_t i, printed;

	if (!ht || (ht && !ht->array))
		return;
	putchar('{');
	i = 0;
	printed = 0;
	while (i < ht->size)
	{
		hash_node_t *bucket;

		bucket = (ht->array)[i++];
		while (bucket)
		{
			printf("'%s': ", bucket->key);
			printf("'%s'", bucket->value);
			if (++printed < ht->count)
				printf(", ");
			bucket = bucket->next;
		}
	}
	putchar('}');
	putchar('\n');
}
