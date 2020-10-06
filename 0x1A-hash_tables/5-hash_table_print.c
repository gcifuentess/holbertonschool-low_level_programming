#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *head;
	int flag;

	if (!ht)
		return;

	printf("{");
	flag = 0;
	for (idx = 0; idx < ht->size; idx++)
	{
		head = ht->array[idx];
		if (!head)
			continue;
		while (head)
		{
			if (flag == 1)
				printf(", ");
			else
				flag = 1;
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
		}
	}
	printf("}\n");
}
