#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: head ptr of the linked list.
 *
 * Important: The function sets the head to NULL.
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	int count, i;

	if (!head)
		return;

	if (!(*head))
		return;

	count = 0;
	for (ptr = *head; ptr; ptr = ptr->next)
		count++;

	for (; count; count--)
	{
		ptr = *head;
		for (i = 1; i < count; i++)
			ptr = ptr->next;
		free(ptr);
	}

	*head = NULL;
}
