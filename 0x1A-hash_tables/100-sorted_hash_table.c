# include "hash_tables.h"
# include <string.h>
static void swap_bucket(shash_node_t **first, shash_node_t **last);
static void sort_bucket(shash_node_t *first, shash_node_t *last);
static shash_node_t *partition(shash_node_t *first, shash_node_t *last);
static int findnode(shash_node_t *, char *);
static void replace_node_at(shash_node_t *, int, char *);

/**
 * shash_table_create - initialize a hash table
 * @size: size of hash table array
 * Return: hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);
	ht->array = NULL;
	ht->shead = NULL;
	ht->size = size;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - add a key value pair to a hash table
 * @ht: pointer to hash table
 * @key: pointer to key
 * @value: pointer to value
 * Return: bucket
 */
int shash_table_set(shash_table_t *ht, const char *key,  const char *value)
{
	shash_node_t *bucket;
	unsigned long int ht_index;
	shash_node_t *bucket_head;
	int idx;

	if (!key || !(*key) || !ht || !ht->array)
		return (0);
	bucket = malloc(sizeof(shash_node_t *));
	if (!bucket)
		return (0);
	bucket->key = strdup(key);
	if (!bucket->key)
	{
		free(bucket);
		return (0);
	}
	bucket->value = strdup(value);
	if (!bucket->value)
	{
		free(bucket->key);
		free(bucket);
		return (0);
	}
	bucket->next = NULL;
	bucket->sprev = NULL;
	bucket->snext = NULL;
	ht_index = key_index((unsigned char *) key, ht->size);
	bucket_head = *(ht->array + ht_index);
	if (bucket_head)
		bucket_head = bucket;
	else if ()
}

/**
 * sort_bucket - Sort a doubly linked list
 * @first: First member of a segment of doubly linked list
 * @last: Last member of doubly linked list
 */

void sort_bucket(shash_node_t *first, shash_node_t *last)
{
	if (!last && last->sprev != first && last->next != first)
	{
		shash_node_t *pivot;

		pivot = partition(first, last);
		sort_bucket(first, pivot);
		sort_bucket(pivot, last);
	}
}

/**
 * partition - find the pivot element of doubly linked list
 * @first: fist element of segment of doubly linked list
 * @last: last element of doubly linked list
 * Return: The pivot bucket
 */

shash_node_t *partition(shash_node_t *first, shash_node_t *last)
{
	char *pivot = last->key;
	shash_node_t *i = first->sprev;
	shash_node_t *j = first;

	while (j != last)
	{
		if (strcmp(j->key, pivot) < 0)
		{
			i = (!i) ? first : i->snext;
			swap_bucket(&i, &j);
		}
		j = j->snext;
	}
	i = (!i) ? first : i->snext;
	swap_bucket(&i, &last);
	return (i);
}

/**
 * swap_bucket - swaps two bucket
 * @first: points to the first bucket
 * @last: points to the second bucket
 */
void swap_bucket(shash_node_t **first, shash_node_t **last)
{
	shash_node_t *tmp = *first;

	*first = *last;
	*last = tmp;
}

/**
 * findnode - an index where a given nodes is else -1
 * @bucket: pointer to bucket to search
 * @key: pointer to key to search for in nodes
 * Return: index of the found node or -1
 */

int findnode(shash_node_t *bucket, char *key)
{
	int i = 0;

	while (bucket)
	{
		if (!strcmp(bucket->key, key))
			return (i);
		i++;
		bucket = bucket->next;
	}
	return (-1);
}

/**
 * replace_node_at - uses an index to replace a node's value at a location
 * @bucket: a single pointer to a bucket
 * @idx: index of node to replace it value
 * @value: pointer to value to replace
 */

void replace_node_at(shash_node_t *bucket, int idx, char *value)
{
	while (idx-- && (bucket = bucket->next))
		;
	bucket->value = value;
}
