# include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: pointer to hash table
 * @key: key to hash to retrieve index
 *
 * Return: Value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_t hash_index;

	if (!ht || (ht && !(ht->array)) || !key || !(*key))
		return (NULL);
	hash_index = key_index((unsigned char *) key, ht->size);
	if (*(ht->array + hash_index))
	{
		hash_node_t *bucket = *(ht->array + hash_index);

		while (bucket)
		{
			if (!strcmp(bucket->key, key))
				return (bucket->value);
			bucket = bucket->next;
		}
	}
	return (NULL);
}

