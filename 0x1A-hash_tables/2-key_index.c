# include "hash_tables.h"

/**
 * key_index - return an index give a key_index
 * @key: string to hash_tables
 * @size: size from
 *
 * Return: a index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (!key || !size)
		return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
