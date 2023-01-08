# include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_t i;

	if (!ht)
		return;
	i = 0;
	if (ht->array)
	{

		while (i < ht->size)
		{
			if (ht->array[i])
				free_bucket(ht->array[i]);
			i++;
		}
		free(ht->array);
	}
	free(ht);
}

/**
 * free_bucket - frees a  bucket
 * @head: head of bucket (head pointer)
 */
void free_bucket(hash_node_t *head)
{
	if (head->next)
		free_bucket(head->next);
	free(head->key);
	free(head->value);
	free(head);
}
