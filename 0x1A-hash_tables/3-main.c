#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int index;
    hash_node_t *head;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "hetairas", "test1");
    hash_table_set(ht, "mentioner", "test1_colission");

    index = key_index((unsigned char *)"mentioner", ht->size);

    printf("index: %lu\n", index);

    head = ht->array[index];

    while (strcmp("mentioner", head->key))
	    head = head->next;

    printf("%s\n", head->value);

    return (EXIT_SUCCESS);
}
