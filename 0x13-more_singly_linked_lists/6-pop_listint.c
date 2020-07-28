#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 * @head: linked list head.
 *
 * Important: if the linked list is empty return 0.
 *
 * Return: head node's data (n) or 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (!(*head))
		return (0);

	data = (*head)->n;
	ptr = (*head)->next;

	free((*head));

	*head = ptr;

	return (data);
}
