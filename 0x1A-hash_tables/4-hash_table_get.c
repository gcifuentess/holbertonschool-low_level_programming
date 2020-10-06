#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key string
 *
 * Return: string value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht | !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];

	if (!head)
		return (NULL);

	while (strcmp(key, head->key))
		head = head->next;

	return (head->value);
}
