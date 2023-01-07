# include "hash_tables.h"
# include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: NULL or hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
		*(table->array + i++) = NULL;
	return (table);
}
