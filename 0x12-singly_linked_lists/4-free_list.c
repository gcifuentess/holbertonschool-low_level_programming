#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the linked list.
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	for (; head; head = head->next)
	{
		free(head->str);
		free(head);
	}
}
