#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *head, *next;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		head = ht->array[idx];
		if (!head)
			continue;
		while (head)
		{
			next = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = next;
		}
	}
	free(ht->array);
	free(ht);
}
