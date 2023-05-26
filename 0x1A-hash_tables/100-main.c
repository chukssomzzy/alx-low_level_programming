# include "hash_tables.h"
# include <stdio.h>

/**
 * main - test hash table sort
 * Return: 1 or 0
 */

int main(void)
{
	shash_table_t *ht;
	int t;

	ht = shash_table_create(1024);
	t = shash_table_set(ht, "betty", "cool");
	printf("%i\n", t);
	t = shash_table_set(ht, "hetairas", "somzzy");
	printf("%i\n", t);
	t = shash_table_set(ht, "mentioner", "chuks");
	printf("%i\n", t);
	printf("%p\n", (void *)ht);
	exit(0);
}
