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
	char *value_cpy, *key_cpy;
	int colission;

	colission = 0;
	if (!key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	key_cpy = strdup(key);
	if (!key_cpy)
		return (0);
	value_cpy = strdup(value);
	if (!value_cpy)
	{
		free(key_cpy);
		return (0);
	}
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
		return (1);
	}

	colission = add_node(ht, key_cpy, value_cpy, index);
	return (colission);
}

/**
 * add_node - adds a node to the hash table
 * @ht: pointer to the hash table
 * @kc: string copy of the key
 * @vc: string copy of the value
 * @idx: index for the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int add_node(hash_table_t *ht, char *kc, char *vc, unsigned long int idx)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(vc);
		free(kc);
		return (0);
	}
	new->value = vc;
	new->key = kc;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
