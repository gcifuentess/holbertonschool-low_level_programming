#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: head of the linked list.
 * @n: int to add to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptr2;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	if (*head)
	{
		for (ptr2 = *head; ptr2->next; ptr2 = ptr2->next)
		{}
		ptr2->next = ptr;
	}
	else
		*head = ptr;

	return (ptr);
}
