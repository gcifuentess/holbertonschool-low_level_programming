#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (!head)
		return;

	for (ptr = head; ptr; ptr = ptr->next)
		free(ptr);
}
