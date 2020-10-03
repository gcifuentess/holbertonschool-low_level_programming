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
	hash_node_t *head;

	colission = 0;
	if (!ht || !key || !value || !*key)
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
	head = ht->array[index];
	if (!head)
	{
		head = malloc(sizeof(hash_node_t));
		if (!head)
		{
			free(value_cpy);
			free(key_cpy);
			return (0);
		}
		head->value = value_cpy;
		head->key = key_cpy;
		head->next = NULL;
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
	hash_node_t *head;

	head = ht->array[idx];

	while (head)
	{
		if (strcmp(kc, head->key) == 0)
		{
			free(head->value);
			head->value = vc;
			return (1);
		}
		head = head->next;

	}
	head = ht->array[idx];
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(vc);
		free(kc);
		return (0);
	}
	new->value = vc;
	new->key = kc;
	new->next = head;
	head = new;

	return (1);
}
