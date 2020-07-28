#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: head ptr of the linked list.
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	int count, i;

	if (!head)
		return;
	count = 0;
	for (ptr = head; ptr; ptr = ptr->next)
		count++;

	for (; count; count--)
	{
		ptr = head;
		for (i = 0; i < count; i++)
			ptr = ptr->next;
		free(ptr);
	}
	free(head);
}
