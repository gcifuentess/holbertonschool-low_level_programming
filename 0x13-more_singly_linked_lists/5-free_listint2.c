#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * Important: The function sets the head to NULL.
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	if (!(*head))
		return;

	for (; *head; *head = (*head)->next)
		free(*head);
}
