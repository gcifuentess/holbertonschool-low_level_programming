#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: string key
 * @value: string value
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	char *value_cpy, *key_cpy;

	if (!key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	if (!value_cpy)
		return (0);

	key_cpy = strdup(key);
	if (!value_cpy)
		return (0);

	if (!ht->array[index])
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (!ht->array[index])
		{
			free(value_cpy);
			free(key_cpy);
			return (0);
		}
		(ht->array[index])->value = value_cpy;
		(ht->array[index])->key = key_cpy;
		(ht->array[index])->next = NULL;
	}
	else
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
		{
			free(value_cpy);
			free(key_cpy);
			return (0);
		}
		new->value = value_cpy;
		new->key = key_cpy;
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
