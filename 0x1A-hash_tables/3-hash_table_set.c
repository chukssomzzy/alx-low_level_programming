# include "hash_tables.h"
# include <stdlib.h>
# include <string.h>

static void add_to_bucket(hash_node_t **, hash_node_t *);
/**
 * hash_table_set - add element hash hash table
 * @ht: hashtable to set list
 * @key: key to map value to
 * @value: value to map key
 *
 * Description: A hash_table element setter
 * Return: 1 (onsuccess) 0 (onfailure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *bucket;
	unsigned long int hash_index;

	if (!key || !(*key) || !ht || (ht && !(*ht->array)))
		return (0);
	bucket = malloc(sizeof(hash_node_t));
	if (!bucket)
		return (0);
	bucket->key = strdup(key);
	if (!bucket->key)
		return (0);
	bucket->value = strdup(value);
	if (!bucket->value)
		return (0);
	bucket->next = NULL;
	hash_index = key_index((unsigned char *) key, ht->size);
	if (!(*(ht->array + hash_index)))
		*(ht->array + hash_index) = bucket;
	else
		add_to_bucket((ht->array + hash_index), bucket);
	return (1);
}

/**
 * add_to_bucket - add to bucket linked list in the event of a collision
 * @bucket_head: double pointer to the head of a list
 * @bucket: bucket to add to the beginning of the list
 *
 */

void add_to_bucket(hash_node_t **bucket_head, hash_node_t *bucket)
{
	bucket->next = *bucket_head;
	*bucket_head = bucket;
}
